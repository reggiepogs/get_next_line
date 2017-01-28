/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 14:54:13 by rnarciso          #+#    #+#             */
/*   Updated: 2016/09/28 16:14:03 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*mem;
	char	*str;

	i = 0;
	mem = (void *)malloc(size);
	if (!mem)
		return (0);
	str = (char *)mem;
	while (i <= size)
		str[i++] = 0;
	return (mem);
}
