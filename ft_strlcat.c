/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:56:29 by fvarrin           #+#    #+#             */
/*   Updated: 2021/10/29 16:35:07 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;
	size_t		src_size;
	size_t		dst_size;

	src_size = ft_strlen((char *)src);
	dst_size = ft_strlen((char *)dst);
	if (!dst || !src || dstsize <= 0 || dstsize < dst_size)
		return (src_size + dstsize);
	i = 0;
	j = dst_size;
	while (j < (dstsize - 1) && i < (size_t)src_size)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (src_size + dst_size);
}
