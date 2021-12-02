/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:32:07 by fvarrin           #+#    #+#             */
/*   Updated: 2021/12/02 16:29:36 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <stdlib.h>

static int	ft_base_has_error(char *base)
{
	int	len;

	len = ft_strlen(base);
	if (len <= 1)
		return (1);
	while (*base)
	{
		if (*base == '-' || *base == '+' || ft_isspace(*base))
			return (1);
		if (ft_count_occurrence(&base[0], *base) > 1)
			return (1);
		base++;
	}
	return (0);
}

static void	ft_countnbr_base(int nbr, char *base, int *count)
{
	int		base_n;

	base_n = ft_strlen(base);
	if (nbr < 0)
	{
		*count += 1;
		if (nbr / -base_n)
			ft_countnbr_base((nbr / -base_n), base, count);
		*count += 1;
	}
	else
	{
		if (nbr / base_n)
			ft_countnbr_base((nbr / base_n), base, count);
		*count += 1;
	}
}

static void	ft_writenbr_base(int nbr, char *base, char *dest)
{
	int				base_n;

	dest--;
	base_n = ft_strlen(base);
	if (nbr < 0)
	{
		if (nbr / -base_n)
			ft_writenbr_base((nbr / -base_n), base, dest);
		*dest = base[-(nbr % base_n)];
	}
	else
	{
		if (nbr / base_n)
			ft_writenbr_base((nbr / base_n), base, dest);
		*dest = base[nbr % base_n];
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int		count;
	int		from_decimal;

	if (ft_base_has_error(base_from) == 1)
		return (0);
	if (ft_base_has_error(base_to) == 1)
		return (0);
	count = 0;
	from_decimal = ft_atoi_base(nbr, base_from);
	ft_countnbr_base(from_decimal, base_to, &count);
	res = (char *) malloc((sizeof(char) * count) + 1);
	if (res == 0)
		return (0);
	ft_writenbr_base(from_decimal, base_to, (res + count));
	if (from_decimal < 0)
		res[0] = '-';
	res[count] = '\0';
	return (res);
}
