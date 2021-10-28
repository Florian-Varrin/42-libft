/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:41:41 by fvarrin           #+#    #+#             */
/*   Updated: 2021/10/28 18:48:37 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libft.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		str_len;
	int		i;

	str_len = ft_strlen((char *)s);
	i = 0;
	while (i < str_len)
	{
		f(i, &s[i]);
		i++;
	}
}
