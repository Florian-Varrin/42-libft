/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:40:30 by fvarrin           #+#    #+#             */
/*   Updated: 2022/03/03 15:17:52 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list_el	*ft_lstcpy(t_list_el *lst, void (*del)(void *))
{
	t_list_el	*new_list;
	t_list_el	*new_el;

	if (!lst || ! del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_el = ft_lstnew(lst->content);
		if (!new_el)
			ft_lstclear(&new_list, del);
		ft_lstadd_back(&new_list, new_el);
		lst = lst->next;
	}
	return (new_list);
}
