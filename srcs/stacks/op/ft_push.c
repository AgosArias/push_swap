/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:50:36 by aarias-d          #+#    #+#             */
/*   Updated: 2025/09/01 18:57:46 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*node;

	if (!a || !*a)
		return ;
	node = *a;
	*a = (*a)->next;
	node->next = *b;
	node ->prev = NULL;
	if (*b)
		(*b)-> prev = node;
	*b = node;
	write(1, "pb\n", 3);
}

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*node;

	if (!b || !*b)
		return ;
	node = *b;
	*b = (*b)->next;
	node->next = *a;
	node ->prev = NULL;
	if (*a)
		(*a)-> prev = node;
	*a = node;
	write(1, "pa\n", 3);
}
