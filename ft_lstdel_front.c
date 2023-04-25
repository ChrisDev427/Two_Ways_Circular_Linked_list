/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:11:01 by chmassa           #+#    #+#             */
/*   Updated: 2023/04/25 17:09:28 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "two_ways_circ_linked_list.h"

// void	ft_lstdel_front(t_list **lst)
// {
// 	t_list	*tmp;
// 	t_list	*to_del;
// 	t_list	*first;
// 	t_list	*last;

// 	if (!(*lst))
// 		return ;
 
// 	if ((*lst)->next != *lst)
// 	{puts("AAA");
//         to_del = *lst;
//         first = (*lst)->next;
//         last = ft_lstlast(*lst);
//         first->prev = last;
//         last->next = first;
//         printf("first data = %d\n", first->data);
//         printf("last data = %d\n", last->data);
//         to_del->next = NULL;
//         to_del->prev = NULL;
//         free(to_del);
//         printf("lst data = %d\n", (*lst)->data);

        

		
// 	}
// 	else
// 	{
// 		free((*lst));
// 		*lst = NULL;
// 	}
// }
