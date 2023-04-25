/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:21:49 by chmassa           #+#    #+#             */
/*   Updated: 2023/04/25 15:21:51 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two_ways_circ_linked_list.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
    t_list     *first;
    t_list     *last;
    t_list     *tmp;

    first = *lst;
    last = ft_lstlast(*lst);
	if (!(*lst))
	{
		*lst = new;
		tmp = *lst;
		tmp->next = tmp;
		tmp->prev = tmp;
		return ;
	}
	else
	{
		*lst = new;
        first->prev = new;
		new->next = first;
        last->next = new;
	}
}
