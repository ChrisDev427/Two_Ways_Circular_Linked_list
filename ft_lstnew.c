/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:17:54 by chmassa           #+#    #+#             */
/*   Updated: 2023/04/25 15:58:52 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two_ways_circ_linked_list.h"

t_list	*ft_lstnew(unsigned int data, unsigned int index)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->data = data;
	new->index = index;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}
