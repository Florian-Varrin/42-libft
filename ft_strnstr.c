/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:07:45 by fvarrin           #+#    #+#             */
/*   Updated: 2021/10/28 21:01:01 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (haystack[0] == '\0')
		return (NULL);
	if (haystack[0] == '\0' || needle[0] == '\0')
		return ((char *)&haystack[0]);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && needle[j])
				j++;
			if ((needle[j] == '\0') && len >= (i + j))
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
