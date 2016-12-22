/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 19:58:18 by rnarciso          #+#    #+#             */
/*   Updated: 2016/12/18 13:49:15 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "./libft/libft.h"

int		get_next_line(const int fd, char **line)
{
	int i;
	int len;
	char	buffer[BUFF_SIZE];
	int		bytes;
	static char *str;
	char *tmp;

	i = 0;
	while ((bytes = read(fd, buffer, BUFF_SIZE)))
	{
		ft_realloc(str, bytes);
		ft_strncat(str, buffer, bytes);
	}
//	while (str[len] != '\n' || str[len])
//		len++;
//	tmp = ft_memalloc(len);
//	while (*str != '\n' || *str)
//	{
//		tmp[i] = str[i];
//		i++;
//		str++;
//	}
//	if (*str == '\n')
//		str++;
//	ft_strcat(*line, tmp);
	return (0);
}
