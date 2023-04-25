/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chmassa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:08:22 by chmassa           #+#    #+#             */
/*   Updated: 2023/04/25 10:57:27 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two_ways_circ_linked_list.h"

void	ft_lstdel_back(t_list **lst)
{
	t_list	*tmp;
	t_list	*tmp2;
	t_list	*first;

	if (!(*lst))
		return ;
	tmp = *lst;
	first = *lst;
	if (tmp->next == first)
	{
		free(tmp);
		*lst = NULL;
	}
	else
	{
		tmp = ft_lstlast(*lst);
		tmp2 = tmp;
		tmp = tmp->prev;
		tmp->next = first;
		first->prev = tmp;
		free(tmp2);
	}
}
