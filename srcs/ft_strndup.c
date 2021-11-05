/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:58:15 by fvarrin           #+#    #+#             */
/*   Updated: 2021/11/05 16:27:47 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_strndup(const char *s1, size_t n)
{
	size_t	i;
	char	*cpy;

	cpy = (char *)malloc(sizeof(char) * (n + 1));
	if (!cpy)
		return (NULL);
	i = 0;
	while (i < n)
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
