/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:50:53 by aarias-d          #+#    #+#             */
/*   Updated: 2025/09/01 18:51:36 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

t_stack	*ft_reverse_rotate(t_stack *stack)
{
	t_stack	*node;

	if (!stack || !stack->next)
		return (stack);
	node = stack;
	while (node -> next)
		node = node->next;
	node -> prev -> next = NULL;
	node -> prev = NULL;
	node -> next = stack;
	stack -> prev = node;
	return (node);
}

void	rra(t_stack **a)
{
	if (!a || !*a || !(*a)->next)
		return ;
	*a = ft_reverse_rotate(*a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	if (!b || !*b || !(*b)->next)
		return ;
	*b = ft_reverse_rotate(*b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	if (!a || !b || !*a || !*b || !(*a)->next || !(*b)->next)
		return ;
	*a = ft_reverse_rotate(*a);
	*b = ft_reverse_rotate(*b);
	write(1, "rrr\n", 4);
}
