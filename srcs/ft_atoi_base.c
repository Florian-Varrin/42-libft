/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:22:21 by fvarrin           #+#    #+#             */
/*   Updated: 2021/12/02 17:03:33 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_calculate_sign(char *str, int *sign)
{
	while (ft_isspace(*str))
		str++;
	if (str[0] == '-')
		*sign = -1;
	if (str[0] == '+' || str[0] == '-')
		str++;
	return (str);
}

int	ft_atoi_base(char *str, char *base)
{
	int		sign;
	int		res;
	int		base_n;
	int		i;

	base_n = ft_strlen(base);
	res = 0;
	sign = 1;
	str = ft_calculate_sign(str, &sign);
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
