/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:27:37 by fvarrin           #+#    #+#             */
/*   Updated: 2021/10/29 16:35:33 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		str_len;
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	str_len = ft_strlen((char *)s);
	str = malloc(sizeof(char) * (str_len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < str_len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
