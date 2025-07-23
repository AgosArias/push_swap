/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:22:39 by aarias-d          #+#    #+#             */
/*   Updated: 2025/07/23 18:23:04 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *node;
	
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	
	node = *lst;
    while (node->next != NULL)
		node = node->next;
    node->next = new;
}
