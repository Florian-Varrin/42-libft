/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:31:21 by fvarrin           #+#    #+#             */
/*   Updated: 2021/10/29 16:38:57 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_count_chars(int n)
{
	int		number_of_chars;

	if (n == 0)
		return (1);
	if (n > 0)
		number_of_chars = 0;
	else
	{
		number_of_chars = 2;
		n /= -10;
	}
	while (n > 0)
	{
		n /= 10;
		number_of_chars++;
	}
	return (number_of_chars);
}

char	*ft_itoa(int n)
{
	int		number_of_chars;
	int		i;
	char	*str;

	number_of_chars = ft_count_chars(n);
	str = malloc(sizeof(char) * (number_of_chars + 1));
	if (!str)
		return (NULL);
	i = number_of_chars - 1;
	if (n <= 0)
	{
		str[0] = '-';
		str[i--] = -(n % 10) + 48;
		n /= -10;
	}
	while (n > 0)
	{
		str[i--] = n % 10 + 48;
		n /= 10;
	}
	str[number_of_chars] = '\0';
	return (str);
}
