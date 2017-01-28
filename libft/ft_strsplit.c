/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 17:51:18 by rnarciso          #+#    #+#             */
/*   Updated: 2016/10/19 18:48:30 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t i;
	size_t wc;

	i = 0;
	wc = 0;
	while (s[i] == c)
		i++;
	if (!s[i])
		return (0);
	wc++;
	i++;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			wc++;
		i++;
	}
	return (wc);
}

static char		**split(char **strarray, char c, char *str, size_t wc)
{
	size_t start;
	size_t i;
	size_t j;

	i = 0;
	start = 0;
	j = 0;
	while (str[i] && j < wc)
	{
		if (str[i] != c)
		{
			start = i;
			while (str[i] && str[i] != c)
				i++;
			strarray[j] = ft_strsub(str, start, i - start);
			j++;
		}
		else
			i++;
	}
	strarray[j] = 0;
	return (strarray);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**strarray;
	size_t	wc;

	wc = count_words(s, c);
	strarray = (char **)malloc(sizeof(char *) * wc + 1);
	if (!strarray)
		return (0);
	strarray = split(strarray, c, (char *)s, wc);
	return (strarray);
}
