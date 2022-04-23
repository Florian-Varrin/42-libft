/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_put.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:19:52 by fvarrin           #+#    #+#             */
/*   Updated: 2022/04/23 13:52:45 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	ft_putchar_wrapper(char c, int *printed_chars, int fd)
{
	*printed_chars += 1;
	ft_putchar_fd(c, fd);
}

void	ft_putstr_wrapper(char *str, int *printed_chars, int fd)
{
	int		i;
	int		str_len;
	char	null_str[7];

	if (str == NULL)
	{
		ft_build_null_str(null_str);
		str = &null_str[0];
	}
	i = 0;
	str_len = ft_strlen(str);
	while (i < str_len)
		ft_putchar_wrapper(str[i++], printed_chars, fd);
}

void	ft_putint_base(long nbr, char *base, int *printed_chars, int fd)
{
	long	base_n;

	base_n = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar_wrapper('-', printed_chars, fd);
		if (nbr < -9)
			ft_putuint_base(nbr / -base_n, base, printed_chars, fd);
		ft_putuint_base(-(nbr % base_n), base, printed_chars, fd);
	}
	else
		ft_putuint_base(nbr, base, printed_chars, fd);
}

void	ft_putuint_base(
		unsigned long nbr,
		char *base,
		int *printed_chars,
		int fd
	)
{
	unsigned long	base_n;

	base_n = ft_strlen(base);
	if (nbr / base_n)
		ft_putuint_base((nbr / base_n), base, printed_chars, fd);
	ft_putchar_wrapper(base[nbr % base_n], printed_chars, fd);
}

void	ft_putaddr(unsigned long nbr, int *printed_chars, int fd)
{
	char	hex_base_l[17];

	ft_build_hexabase_lower(hex_base_l);
	ft_putchar_wrapper('0', printed_chars, fd);
	ft_putchar_wrapper('x', printed_chars, fd);
	ft_putuint_base(nbr, hex_base_l, printed_chars, fd);
}
