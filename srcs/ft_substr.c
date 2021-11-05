/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:13:17 by fvarrin           #+#    #+#             */
/*   Updated: 2021/10/29 16:36:21 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*cpy;

	if (!s)
		return (NULL);
	if (ft_strlen((char *)s) < start)
		return (ft_strdup(""));
	i = 0;
	j = start;
	if (ft_strlen((char *)(s + start)) < len)
		len = ft_strlen((char *)(s + start));
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);
	while (s[j] && i < len)
		cpy[i++] = s[j++];
	cpy[i] = '\0';
	return (cpy);
}
