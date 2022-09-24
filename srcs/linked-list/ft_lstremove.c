/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:01:32 by kmendes           #+#    #+#             */
/*   Updated: 2022/09/24 15:28:14 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *
 * Remove an element of the list
 *
 * @param {t_list_el **} lst
 * @param {t_list_el *} item
 * @param del
 */
void	ft_lstremove(t_list_el **lst, t_list_el *item, void (*del)(void *))
{
	t_list_el	*tmp;

	if (lst == NULL || item == NULL)
		return ;
	tmp = *lst;
	if (tmp == item)
	{
		*lst = item->next;
		ft_lstdelone(item, del);
		return ;
	}
	while (tmp)
	{
		if (tmp->next == item)
		{
			tmp->next = item->next;
			ft_lstdelone(item, del);
			return ;
		}
		tmp = tmp->next;
	}
}
