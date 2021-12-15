/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:33:01 by fvarrin           #+#    #+#             */
/*   Updated: 2021/12/15 12:55:22 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

t_list_el	*ft_lstnew(void *content)
{
	t_list_el	*el;

	el = (t_list_el *)malloc(sizeof(t_list_el));
	if (!el)
		return (NULL);
	el->content = content;
	el->next = NULL;
	return (el);
}
