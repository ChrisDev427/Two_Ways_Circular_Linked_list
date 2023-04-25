/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chmassa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 10:48:27 by chmassa           #+#    #+#             */
/*   Updated: 2023/04/25 10:56:26 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two_ways_circ_linked_list.h"

int main()
{
    t_list  *list;
    t_list  *new;

    list = NULL;
    new = ft_lstnew(100);
    ft_lstadd_back(&list, new);
    new = ft_lstnew(200);
    ft_lstadd_back(&list, new);
    new = ft_lstnew(300);
    ft_lstadd_back(&list, new);
    new = ft_lstnew(400);
    ft_lstadd_back(&list, new);
    new = ft_lstnew(500);
    ft_lstadd_back(&list, new);

    ft_lstprint(list);
    printf("lst size = %d\n", ft_lstsize(list));
    ft_lstdel_back(&list);
    ft_lstprint(list);
    ft_lstdel_back(&list);
    ft_lstprint(list);
    ft_lstdel_back(&list);
    ft_lstprint(list);
    ft_lstdel_back(&list);
    ft_lstprint(list);
    ft_lstdel_back(&list);
    ft_lstprint(list);
    printf("lst size = %d\n", ft_lstsize(list));
    return (0);
}