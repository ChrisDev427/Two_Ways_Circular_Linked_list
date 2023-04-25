/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chmassa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:20:33 by chmassa           #+#    #+#             */
/*   Updated: 2023/04/25 10:35:58 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two_ways_circ_linked_list.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;
	t_list	*first;
	
	if (!lst)
		return (NULL);
	tmp = lst;
	first = lst;
	if (tmp->next == first)
		return (tmp);
	while (1)
	{
		if (tmp->next == first)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
