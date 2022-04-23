/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:27:53 by fvarrin           #+#    #+#             */
/*   Updated: 2022/04/23 13:49:43 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

#include <stdio.h>
#include <stdarg.h>

int	ft_printf_fd(int fd, const char *str, ...)
{
	va_list		args;
	int			printed_chars;
	int			i;

	i = -1;
	printed_chars = 0;
	va_start(args, str);
	while (str[++i])
	{
		if (str[i] == '%' && str[i + 1])
			ft_handle_char(str[++i], args, &printed_chars, fd);
		else
			ft_putchar_wrapper(str[i], &printed_chars, fd);
	}
	return (printed_chars);
}
