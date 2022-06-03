/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove_next.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:39:38 by fvarrin           #+#    #+#             */
/*   Updated: 2022/06/03 14:39:38 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstremove_next(t_list_el *alst, void (*del)(void*))
{
	t_list_el	*el_to_delete;

	el_to_delete = alst->next;
	alst->next = el_to_delete->next;
	ft_lstdelone(el_to_delete, del);
}
