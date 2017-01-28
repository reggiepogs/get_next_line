/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 17:57:14 by rnarciso          #+#    #+#             */
/*   Updated: 2016/09/28 18:39:48 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const
		void *restrict src, int c, size_t n)
{
	size_t				i;
	unsigned char		*str_dst;
	const unsigned char	*str_src;
	unsigned char		uc;

	i = 0;
	str_dst = (unsigned char *)dst;
	str_src = (const unsigned char *)src;
	uc = (unsigned char)c;
	while (i < n)
	{
		if ((*str_dst++ = *str_src++) == uc)
			return (str_dst);
		i++;
	}
	return (NULL);
}
