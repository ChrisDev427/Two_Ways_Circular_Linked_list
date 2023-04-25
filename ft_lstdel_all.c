/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chmassa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:07:14 by chmassa           #+#    #+#             */
/*   Updated: 2023/04/25 10:36:34 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two_ways_circ_linked_list.h"

void	ft_lstdel_all(t_list **lst)
{
	t_list	*tmp;
	t_list	*first;

	if (!(*lst))
		return ;
	first = *lst;
	while (1)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		if (tmp->next == first)
		{
			free(tmp);
			break ;
		}
		free(tmp);
	}
	*lst = NULL;
}
