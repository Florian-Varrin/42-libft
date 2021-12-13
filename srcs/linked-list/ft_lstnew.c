/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:33:01 by fvarrin           #+#    #+#             */
/*   Updated: 2021/12/13 11:40:02 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*el;

	el = (t_list *)malloc(sizeof(t_list));
	el->content = content;
	el->next = NULL;
	return (el);
}
