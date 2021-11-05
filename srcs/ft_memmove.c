/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 11:38:10 by fvarrin           #+#    #+#             */
/*   Updated: 2021/10/29 16:33:27 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int		i;

	if (dst == NULL && src == NULL)
		return (dst);
	if (src > dst)
		return (ft_memcpy(dst, src, n));
	i = (int)n - 1;
	while (i >= 0)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i--;
	}
	return (dst);
}
