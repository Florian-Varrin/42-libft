/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:12:54 by fvarrin           #+#    #+#             */
/*   Updated: 2021/12/15 12:56:06 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list_el	*ft_lstlast(t_list_el *lst)
{
	t_list_el	*current_el;

	if (!lst)
		return (NULL);
	current_el = lst;
	while (current_el->next)
		current_el = current_el->next;
	return (current_el);
}
