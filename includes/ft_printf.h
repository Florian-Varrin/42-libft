/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:28:58 by fvarrin           #+#    #+#             */
/*   Updated: 2022/04/23 13:55:44 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

void	ft_handle_char(char c, va_list args, int *print_c, int fd);
void	ft_putchar_wrapper(char c, int *printed_chars, int fd);
void	ft_putstr_wrapper(char *str, int *printed_chars, int fd);
void	ft_build_null_str(char dest[7]);
void	ft_putint_base(long nbr, char *base, int *printed_chars, int fd);
void	ft_putuint_base(unsigned long nbr, char *base,
			int *printed_chars, int fd);
void	ft_putaddr(unsigned long nbr, int *printed_chars, int fd);

#endif
