/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 21:00:00 by rnarciso          #+#    #+#             */
/*   Updated: 2016/09/29 17:54:52 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int			i;
	char		*str_dst;
	const char	*str_src;

	str_dst = (char *)dst;
	str_src = (const char *)src;
	if (dst > src)
	{
		i = (int)len - 1;
		while (i != -1)
		{
			str_dst[i] = str_src[i];
			i--;
		}
	}
	else
		dst = ft_memcpy(str_dst, str_src, len);
	return (dst);
}
