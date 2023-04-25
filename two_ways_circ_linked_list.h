/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_ways_circ_linked_list.h                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 10:28:14 by chmassa           #+#    #+#             */
/*   Updated: 2023/04/25 16:20:15 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TWO_WAYS_CIRC_LINKED_LIST_H
# define TWO_WAYS_CIRC_LINKED_LIST_H
# include <stdio.h>
# include <stdlib.h>

typedef struct  s_list
{
    unsigned int    data;
    int             index;
    struct s_list   *next;
    struct s_list   *prev;
}               t_list;

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
int	    ft_lstsize(t_list *lst);
void	ft_lstprint(t_list *lst);
t_list	*ft_lstnew(unsigned int data, unsigned int index);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstdel_back(t_list **lst);
void	ft_lstdel_all(t_list **lst);
void	ft_lstdel_front(t_list **lst);

#endif