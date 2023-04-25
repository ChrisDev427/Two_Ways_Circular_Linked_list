/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chmassa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:11:01 by chmassa           #+#    #+#             */
/*   Updated: 2023/04/25 10:54:19 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// void	ft_lstdel_front(t_list **lst)
// {
// 	t_list	*temp;

// 	if (!(*lst))
// 		return ;
// 	if ((*lst)->next)
// 	{
// 		temp = (*lst)->next;
// 		free((*lst)->str);
// 		free((*lst));
// 		*lst = temp;
// 		(*lst)->prev = NULL;
// 	}
// 	else
// 	{
// 		free((*lst)->str);
// 		free((*lst));
// 		*lst = NULL;
// 	}
// }
