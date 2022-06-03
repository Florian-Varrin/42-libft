/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove_last.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:39:38 by fvarrin           #+#    #+#             */
/*   Updated: 2022/06/03 14:39:38 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstremove_last(t_list_el **alst, void (*del)(void*))
{
	int			i;
	int			lst_size;
	t_list_el	*last_el;
	t_list_el	*new_last_el;

	lst_size = ft_lstsize(*alst);
	i = 0;
	while (i < lst_size - 1)
	{
		new_last_el = (*alst)->next;
		i++;
	}
	last_el = new_last_el->next;
	del(last_el);
	new_last_el->next = NULL;
}
