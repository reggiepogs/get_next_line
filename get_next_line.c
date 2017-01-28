/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 19:58:18 by rnarciso          #+#    #+#             */
/*   Updated: 2017/01/25 18:45:19 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	line_check(char *str)
{
	if (str[0] != 0)
	{
		ft_strclr(str);
		return (1);
	}
	return (0);
}

int			get_next_line(const int fd, char **line)
{
	char		buffer[BUFF_SIZE + 1];
	int			bytes;
	static char	*str;
	char		*tmp;
	int			tmpsize;

	if (fd < 0 || line == NULL || read(fd, buffer, 0) < 0)
		return (-1);
	if (!str)
		str = ft_strnew(BUFF_SIZE + 1);
	ft_bzero(buffer, BUFF_SIZE + 1);
	while (!ft_strchr(buffer, '\n') && (bytes = read(fd, buffer, BUFF_SIZE)))
	{
		str = ft_realloc(str, ft_strlen(str) + bytes + 1);
		str = ft_strncat(str, buffer, bytes);
	}
	if ((tmp = ft_strchr(str, '\n')))
	{
		tmpsize = ft_strlen(&tmp[1]);
		*line = ft_strsub(str, 0, ft_strlen(str) - ft_strlen(tmp));
		str = ft_strsub(str, ft_strlen(str) - tmpsize, tmpsize);
		return (1);
	}
	*line = ft_strdup(str);
	return (line_check(str));
}
