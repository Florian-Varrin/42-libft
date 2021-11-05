/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:58:21 by fvarrin           #+#    #+#             */
/*   Updated: 2021/10/29 16:32:51 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int		i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	if (n == 0)
		return (0);
	str1 = s1;
	str2 = s2;
	i = -1;
	while ((*str1 == *str2) && (++i) < (n - 1))
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
