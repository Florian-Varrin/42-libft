/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:06:10 by fvarrin           #+#    #+#             */
/*   Updated: 2021/10/29 16:33:35 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned long	i;

	i = 0;
	str = b;
	while (i < len)
		str[i++] = c;
	return (b);
}
