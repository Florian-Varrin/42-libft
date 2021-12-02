/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:55:35 by fvarrin           #+#    #+#             */
/*   Updated: 2021/12/02 14:32:42 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

#include <stdio.h>

void	ft_build_null_str(char dest[7])
{
	dest[0] = '(';
	dest[1] = 'n';
	dest[2] = 'u';
	dest[3] = 'l';
	dest[4] = 'l';
	dest[5] = ')';
	dest[6] = '\0';
}
