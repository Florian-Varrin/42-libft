/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:28:58 by fvarrin           #+#    #+#             */
/*   Updated: 2021/11/07 14:08:18 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int		ft_printf(const char *str, ...);
void	ft_putchar_wrapper(char c, int *printed_chars);
void	ft_putint_wrapper(int n, int *printed_chars);
void	ft_putuint_wrapper(unsigned int n, int *printed_chars);
void	ft_putstr_wrapper(char *str, int *printed_chars);
void	ft_build_decimalbase(char dest[10]);
void	ft_build_hexabase_lower(char dest[16]);
void	ft_build_hexabase_upper(char dest[16]);
void	ft_build_null_str(char dest[7]);
void	ft_putint_base(long nbr, char *base, int *printed_chars);
void	ft_putuint_base(unsigned long nbr, char *base, int *printed_chars);
void	ft_putaddr(unsigned long nbr, int *printed_chars);

#endif
