/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:07:35 by fvarrin           #+#    #+#             */
/*   Updated: 2021/12/15 13:50:29 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list_el *lst)
{
	t_list_el	*current_el;
	int			count;

	if (!lst)
		return (0);
	count = 1;
	current_el = lst;
	while (current_el->next)
	{
		count++;
		current_el = current_el->next;
	}
	return (count);
}
