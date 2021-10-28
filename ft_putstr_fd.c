/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 20:13:56 by fvarrin           #+#    #+#             */
/*   Updated: 2021/10/28 20:14:43 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <libft.h>

void	ft_putstr_fd(char *s, int fd)
{
	int		str_len;

	str_len = ft_strlen(s);
	write(fd, s, str_len);
}
