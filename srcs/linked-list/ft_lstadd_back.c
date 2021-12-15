/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarrin <florian.varrin@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:18:38 by fvarrin           #+#    #+#             */
/*   Updated: 2021/12/15 11:06:52 by fvarrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (!alst || !new)
		return ;
	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}
	tmp = ft_lstlast(*alst);
	tmp->next = new;
}

/* void	ft_lstadd_back(t_list **alst, t_list *new) */
/* { */
/* 	t_list	*tmp; */

/* 	if (alst) */
/* 	{ */
/* 		if (*alst == NULL) */
/* 			*alst = new; */
/* 		else */
/* 		{ */
/* 			tmp = ft_lstlast(*(alst)); */
/* 			ft_printf("tmp->content %s\n", tmp->content); */
/* 			tmp->next = new; */
/* 		} */
/* 	} */
/* } */
