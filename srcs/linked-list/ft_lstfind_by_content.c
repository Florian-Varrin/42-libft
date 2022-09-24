/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind_by_content.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes <kmendes@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:01:32 by kmendes           #+#    #+#             */
/*   Updated: 2022/09/24 15:30:31 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *
 * Find an element with content as content (pointer comparaison)
 *
 * @param {t_list_el *} lst
 * @param content
 * @return
 */
t_list_el	*ft_lstfind_by_content(t_list_el *lst, void *content)
{
	if (lst == NULL || content == NULL)
		return (NULL);
	while (lst)
	{
		if (lst->content == content)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
