/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:36:22 by fvarrin           #+#    #+#             */
/*   Updated: 2022/01/06 17:37:58 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

static int	fill_buffer(int fd, char *buf)
{
	int		i;
	int		r;

	i = 0;
	while (i < BUFFER_SIZE)
		buf[i++] = 0;
	i = 0;
	r = read(fd, buf, BUFFER_SIZE);
	return (r);
}

static int	handle_buffer(int fd, char *buf, int *buf_cursor)
{
	int		bytes_read;

	bytes_read = fill_buffer(fd, buf);
	if (bytes_read <= 0)
		return (1);
	*buf_cursor = 0;
	return (0);
}

static char	*write_str(int buf_start, int *buf_cursor, int *i, char *buf)
{
	char		*str;

	str = malloc(sizeof(char) * (*buf_cursor - buf_start + 1));
	if (!str)
		return (NULL);
	*buf_cursor = buf_start;
	while (buf[*buf_cursor] && buf[*buf_cursor] != '\n'
		&& *buf_cursor != BUFFER_SIZE)
		str[(*i)++] = buf[(*buf_cursor)++];
	if (buf[*buf_cursor] == '\n')
	{
		(*buf_cursor)++;
		str[(*i)++] = '\n';
	}
	str[*i] = '\0';
	return (str);
}

static char	*read_buffer(int fd, char *buf, char *str, _Bool force_fill_buffer)
{
	static int	buf_cursor = 0;
	int			buf_start;
	int			i;
	char		*next_str;
	char		next_str_last_char;

	if (force_fill_buffer || buf[0] == '\0' || buf_cursor == BUFFER_SIZE)
	{
		if (handle_buffer(fd, buf, &buf_cursor))
			return (str);
	}
	buf_start = buf_cursor;
	while (buf[buf_cursor] != '\n' && buf_cursor != BUFFER_SIZE)
		buf_cursor++;
	if (buf[buf_cursor] == '\n')
		buf_cursor++;
	i = 0;
	next_str = write_str(buf_start, &buf_cursor, &i, buf);
	next_str_last_char = ft_get_last_char(next_str);
	str = ft_strjoin_and_free(str, next_str);
	if (!next_str || !str)
		return (NULL);
	if (next_str_last_char != '\n')
		return (read_buffer(fd, buf, str, true));
	return (str);
}

char	*ft_get_next_line(int fd)
{
	static char	buf[BUFFER_SIZE] = {0};
	char		*str;

	str = malloc(sizeof(char));
	str[0] = 0;
	str = read_buffer(fd, buf, str, false);
	if (str && str[0] == 0)
	{
		free(str);
		return (NULL);
	}
	return (str);
}
