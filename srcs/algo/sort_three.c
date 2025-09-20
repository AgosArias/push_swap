/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agossariass <agossariass@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:24:22 by aarias-d          #+#    #+#             */
/*   Updated: 2025/09/17 17:26:45 by agossariass      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_3(t_stack **stack_a)
{
	if (ft_head_is_max(*stack_a))
	{
		ra(stack_a);
		sa(*stack_a);
	}
	else if (ft_head_is_max((*stack_a)->next))
	{
		rra(stack_a);
		sa(*stack_a);
	}
	else if (ft_be_swapped_a(*stack_a))
		sa(*stack_a);
}

int	ft_be_swapped_a(t_stack *stack)
{
	t_stack	*node;

	if (!stack || !stack->next)
		return (0);
	node = stack;
	if (node->index > node->next->index)
		return (1);
	return (0);
}

int	ft_head_is_max(t_stack *stack)
{
	t_stack	*node;

	if (!stack)
		return (0);
	node = stack ->next;
	while (node)
	{
		if (node->index > stack->index)
			return (0);
		node = node->next;
	}
	return (1);
}
