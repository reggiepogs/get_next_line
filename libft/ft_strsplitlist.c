/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplitlist.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 18:01:17 by rnarciso          #+#    #+#             */
/*   Updated: 2016/10/20 18:03:43 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strsplitlist(char const *str, char c)
{
	char **t;

	t = ft_strsplit(str, c);
	while (*t)
	{
		ft_putendl(*t);
		t++;
	}
}
