/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:24:16 by aarias-d          #+#    #+#             */
/*   Updated: 2025/09/09 17:24:17 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_target_pos(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*node;
	int		target_index;
	int		target_pos;

	node = *stack_a;
	target_index = INT_MAX;
	target_pos = ft_get_lowest_index_pos(stack_a);
	while (node)
	{
		if (node->index > (*stack_b)->index && node->index < target_index)
		{
			target_index = node->index;
			target_pos = node->position;
		}
		node = node->next;
	}
	return (target_pos);
}

void	ft_asign_target(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp_b;

	ft_normalize_stack(stack_a);
	ft_normalize_stack(stack_b);
	if (!stack_b || !*stack_b)
		return ;
	tmp_b = *stack_b;
	while (tmp_b)
	{
		tmp_b->target_pos = ft_get_target_pos(stack_a, &tmp_b);
		tmp_b = tmp_b->next;
	}
}

void	ft_normalize_stack(t_stack **stack)
{
	t_stack	*node;
	int		index;

	if (!stack || !*stack)
		return ;
	node = *stack;
	index = 0;
	while (node)
	{
		node->position = index++;
		node = node->next;
	}
}

int	ft_get_lowest_index_pos(t_stack **stack)
{
	int		lowest_index;
	int		lowest_pos;
	t_stack	*node;

	lowest_index = INT_MAX;
	lowest_pos = 0;
	node = *stack;
	while (node)
	{
		if (node->index < lowest_index)
		{
			lowest_index = node->index;
			lowest_pos = node->position;
		}
		node = node->next;
	}
	return (lowest_pos);
}
