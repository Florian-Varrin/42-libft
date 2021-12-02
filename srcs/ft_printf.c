/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:27:53 by fvarrin           #+#    #+#             */
/*   Updated: 2021/11/07 13:59:24 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

#include <stdio.h>
#include <stdarg.h>

void	ft_handle_char(char c, va_list args, int *printed_chars)
{
	char	dec_base[11];
	char	hex_base_l[17];
	char	hex_base_u[17];

	ft_build_decimalbase(dec_base);
	ft_build_hexabase_lower(hex_base_l);
	ft_build_hexabase_upper(hex_base_u);
	if (c == 'c')
		ft_putchar_wrapper(va_arg(args, int), printed_chars);
	else if (c == 'd' || c == 'i')
		ft_putint_base(va_arg(args, int), dec_base, printed_chars);
	else if (c == 's')
		ft_putstr_wrapper(va_arg(args, char *), printed_chars);
	else if (c == '%')
		ft_putchar_wrapper('%', printed_chars);
	else if (c == 'u')
		ft_putuint_base(va_arg(args, unsigned int), dec_base, printed_chars);
	else if (c == 'x')
		ft_putuint_base(va_arg(args, unsigned int), hex_base_l, printed_chars);
	else if (c == 'X')
		ft_putuint_base(va_arg(args, unsigned int), hex_base_u, printed_chars);
	else if (c == 'p')
		ft_putaddr(va_arg(args, unsigned long), printed_chars);
}

int	ft_printf(const char *str, ...)
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
			ft_handle_char(str[++i], args, &printed_chars);
		else
			ft_putchar_wrapper(str[i], &printed_chars);
	}
	return (printed_chars);
}
