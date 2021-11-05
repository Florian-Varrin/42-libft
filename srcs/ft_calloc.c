/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:50:34 by fvarrin           #+#    #+#             */
/*   Updated: 2021/10/29 16:29:59 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	int		len;

	len = (count * size);
	ptr = malloc(len);
	if (ptr == NULL)
		return (ptr);
	ft_memset(ptr, 0, len);
	return (ptr);
}
