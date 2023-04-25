/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 10:48:27 by chmassa           #+#    #+#             */
/*   Updated: 2023/04/25 17:25:08 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two_ways_circ_linked_list.h"

int main()
{
    t_list  *list;
    t_list  *new;
    t_list  *i;

    list = NULL;
    i->index = 0;
    new = ft_lstnew(100, i->index++);
    ft_lstadd_back(&list, new);
    new = ft_lstnew(200, i->index++);
    ft_lstadd_back(&list, new);
    new = ft_lstnew(300, i->index++);
    ft_lstadd_back(&list, new);
    new = ft_lstnew(400, i->index++);
    ft_lstadd_back(&list, new);
    new = ft_lstnew(500, i->index++);
    ft_lstadd_back(&list, new);
    new = ft_lstnew(50000, i->index++);
    ft_lstadd_back(&list, new);

    ft_lstprint(list);
    ft_lstdel_all(&list);
    ft_lstprint(list);

    
    printf("lst size = %d\n", ft_lstsize(list));
    system("leaks a.out");
    return (0);
}