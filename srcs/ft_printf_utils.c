/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:55:35 by fvarrin           #+#    #+#             */
/*   Updated: 2021/11/07 14:07:39 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

#include <stdio.h>

void	ft_build_decimalbase(char dest[11])
{
	int		i;

	i = 0;
	while (i <= 9)
	{
		dest[i] = (i + 48);
		i++;
	}
	dest[i] = '\0';
}

void	ft_build_hexabase(char dest[17], int first_letter_val)
{
	int		i;
	int		j;

	i = 0;
	j = 48;
	while (i <= 9)
		dest[i++] = j++;
	j = first_letter_val;
	while (i < 16)
		dest[i++] = j++;
	dest[i] = '\0';
}

void	ft_build_hexabase_lower(char dest[17])
{
	ft_build_hexabase(dest, 97);
}

void	ft_build_hexabase_upper(char dest[17])
{
	ft_build_hexabase(dest, 65);
}

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
