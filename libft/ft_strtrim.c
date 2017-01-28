/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 11:27:54 by rnarciso          #+#    #+#             */
/*   Updated: 2016/10/19 12:36:38 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_psws(char const *s)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (s[len] == ' ' || s[len] == '\t' || s[len] == '\n')
		len++;
	if (s[len] == 0)
		return (0);
	while (s[i])
		i++;
	i--;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i--;
	}
	return (i - len + 1);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	int		limit;
	char	*str;

	i = 0;
	len = count_psws(s) + 1;
	limit = len - 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (0);
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	while (limit > 0)
	{
		str[i] = *s;
		i++;
		s++;
		limit--;
	}
	str[i] = 0;
	return (str);
}
