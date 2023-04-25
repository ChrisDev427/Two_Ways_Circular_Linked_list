/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chmassa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:47:06 by chmassa           #+#    #+#             */
/*   Updated: 2023/04/25 10:33:23 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two_ways_circ_linked_list.h"

int	ft_lstsize(t_list *lst)
{
	int		nb_element;
	t_list	*tmp;
	t_list	*first;

	if (!lst)
		return (0);
	tmp = lst;
	first = lst;
	nb_element = 0;
	while (1)
	{
		nb_element++;
		if (tmp->next == first)
			break ;
		tmp = tmp->next;
	}
	return (nb_element);
}
