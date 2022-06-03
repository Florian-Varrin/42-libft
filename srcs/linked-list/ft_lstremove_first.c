/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove_first.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:39:38 by fvarrin           #+#    #+#             */
/*   Updated: 2022/06/03 14:39:38 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstremove_first(t_list_el **alst, void (*del)(void*))
{
	t_list_el	*new_first_el;

	new_first_el = (*alst)->next;
	ft_lstdelone(*alst, del);
	alst = &new_first_el;
}
