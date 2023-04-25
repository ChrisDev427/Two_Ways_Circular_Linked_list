/****************************************************************************/
/*                                                                          */
/*                                                        :::      :::::::: */
/*   ft_lstadd_back.c                                   :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+   */
/*   By: chmassa <chmassa@student.42.fr>            +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+         */
/*   Created: 2023/04/25 10:37:24 by chmassa           #+#    #+#           */
/*   Updated: 2023/04/25 10:41:50 by chmassa          ###   ########.fr     */
/*                                                                          */
/****************************************************************************/

#include "two_ways_circ_linked_list.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;
	t_list	*first;
	
	if (!(*lst))
	{
		*lst = new;
		tmp = *lst;
		tmp->next = tmp;
		tmp->prev = tmp;
		return ;
	}
	first = *lst;
	tmp = ft_lstlast(*lst);
	tmp->next = new;
	new->prev = tmp;
	new->next = first;
	first->prev = new;
}
