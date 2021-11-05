/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:28:57 by fvarrin           #+#    #+#             */
/*   Updated: 2021/10/29 16:39:34 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

static int	ft_wordlen(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	ft_count_word(char const *s, char c)
{
	_Bool	is_in_word;
	int		i;
	int		word_count;

	i = -1;
	is_in_word = false;
	word_count = 0;
	if (c == '\0' && s[0] == '\0')
		return (0);
	else if (c == '\0')
		return (1);
	while (s[++i])
	{
		if (s[i] == c)
			is_in_word = false;
		else
		{
			if (!is_in_word)
			{
				is_in_word = true;
				word_count++;
			}
		}
	}
	return (word_count);
}

static char	**ft_free_res(char **res, int words)
{
	int		i;

	i = 0;
	if (!res)
		return (NULL);
	while (i < words)
	{
		if (res[i])
			free(res[i++]);
	}
	free(res);
	return (NULL);
}

static char	**ft_fill_res(char const *s, char c, char ***res, int word_count)
{
	int		i;
	int		j;
	_Bool	is_in_word;

	i = -1;
	j = 0;
	is_in_word = false;
	while (j < word_count)
	{
		if (s[++i] == c)
		{
			is_in_word = false;
			continue ;
		}
		if (!is_in_word)
		{
			is_in_word = true;
			(*res)[j] = malloc(sizeof(char) * (ft_wordlen(&s[i], c) + 1));
			if (!(*res)[j])
				return (ft_free_res(*res, (j - 1)));
			ft_strlcpy((*res)[j++], &s[i], (ft_wordlen(&s[i], c) + 1));
		}
	}
	return (*res);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**res;

	if (!s)
		return (NULL);
	word_count = ft_count_word(s, c);
	res = malloc(sizeof(char *) * (word_count + 1));
	if (!res)
		return (NULL);
	res = ft_fill_res(s, c, &res, word_count);
	res[word_count] = NULL;
	return (res);
}
