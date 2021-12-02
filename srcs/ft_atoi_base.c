/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:22:21 by fvarrin           #+#    #+#             */
/*   Updated: 2021/12/02 14:25:12 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_base(char *str, char *base)
{
	int		sign;
	int		res;
	int		base_n;
	int		i;

	base_n = ft_strlen(base);
	res = 0;
	sign = 1;
	if (str[0] == '+')
		str++;
	else if (str[0] == '-')
	{
		str++;
		sign = -1;
	}
	while (*str && ft_count_occurrence(base, *str) >= 1)
	{
		res *= base_n;
		i = -1;
		while (base[++i])
		{
			if (*str == base[i])
			{
				res += i;
				break ;
			}
		}
		str++;
	}
	return (res * sign);
}
