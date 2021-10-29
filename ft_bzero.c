/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:51:45 by fvarrin           #+#    #+#             */
/*   Updated: 2021/10/29 16:29:27 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char			*str;
	unsigned long	i;

	i = 0;
	str = s;
	while (i < n)
		str[i++] = '\0';
}
