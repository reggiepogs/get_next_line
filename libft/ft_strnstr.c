/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 10:57:38 by rnarciso          #+#    #+#             */
/*   Updated: 2016/10/19 18:52:51 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	temp_len;
	int		len2;
	int		i;
	int		j;

	len2 = ft_strlen(little);
	i = 0;
	j = 0;
	if (len2 == 0 || len == 0)
		return ((char *)big);
	while (big[i] && len != 0)
	{
		temp_len = len;
		while (little[j] == big[i + j] && temp_len != 0)
		{
			if (j == len2 - 1)
				return ((char *)big + i);
			j++;
			temp_len--;
		}
		j = 0;
		i++;
		len--;
	}
	return (0);
}
