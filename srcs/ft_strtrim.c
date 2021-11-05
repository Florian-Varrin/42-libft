/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:13:12 by fvarrin           #+#    #+#             */
/*   Updated: 2021/10/29 16:40:05 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

static _Bool	ft_isincharset(char c, char const *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (true);
		i++;
	}
	return (false);
}

/**
 * Return pointer to start of trimed string and write it's length in len variable
**/
static char	*ft_trimset(char const *s1, char const *set, int *len)
{
	int		i;
	char	*start;
	int		str_len;

	str_len = ft_strlen((char *)s1);
	i = -1;
	while (s1[++i] && *len != 0)
	{
		if (ft_isincharset(s1[i], set))
			(*len)--;
		else
		{
			start = (char *)&s1[i];
			break ;
		}
	}
	i = str_len;
	while (s1[--i] && *len != 0)
	{
		if (ft_isincharset(s1[i], set))
			(*len)--;
		else
			break ;
	}
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*start;
	char	*str;

	if (!s1)
		return (NULL);
	len = ft_strlen((char *)s1);
	start = ft_trimset(s1, set, &len);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, start, len);
	str[len] = '\0';
	return (str);
}
