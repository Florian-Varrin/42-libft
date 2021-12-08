/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:36:30 by fvarrin           #+#    #+#             */
/*   Updated: 2021/11/05 15:35:55 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdbool.h>

char	*get_next_line(int fd);
int		handle_buffer(int fd, char *buf, char *str, int *buf_cursor);
char	get_last_char(char *str);
char	*ft_strjoin(char *s1, char *s2);

#endif
