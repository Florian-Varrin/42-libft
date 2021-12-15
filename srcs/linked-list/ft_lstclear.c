/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:19:31 by fvarrin           #+#    #+#             */
/*   Updated: 2021/12/15 12:57:01 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list_el **lst, void (*del)(void*))
{
	t_list_el	*current_el;
	t_list_el	*next_el;

	if (!lst)
		return ;
	current_el = *lst;
	while (current_el)
	{
		next_el = current_el->next;
		ft_lstdelone(current_el, del);
		current_el = next_el;
		next_el = NULL;
	}
	*lst = NULL;
}
