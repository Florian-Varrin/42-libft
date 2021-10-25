/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:06:10 by fvarrin           #+#    #+#             */
/*   Updated: 2021/10/25 14:38:56 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char			*str;
	unsigned long	i;

	i = 0;
	str = b;
	while (i < len)
		str[i++] = (unsigned char)c;
	return b;
}
