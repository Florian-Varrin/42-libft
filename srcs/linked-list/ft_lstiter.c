/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:31:56 by fvarrin           #+#    #+#             */
/*   Updated: 2021/12/15 12:56:24 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list_el *lst, void (*f)(void *))
{
	t_list_el	*current_el;

	if (!lst)
		return ;
	current_el = lst;
	while (current_el)
	{
		f(current_el->content);
		current_el = current_el->next;
	}
}
