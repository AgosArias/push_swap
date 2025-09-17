/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agossariass <agossariass@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 17:13:38 by agossariass       #+#    #+#             */
/*   Updated: 2025/09/17 17:27:10 by agossariass      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	size;
	int	push;

	if (ft_be_sorted(*stack_a))
		return ;
	size = ft_stacksize(*stack_a);
	push = 0;
	while (size - push > 3)
	{
		pb(stack_a, stack_b);
		push++;
	}
	ft_sort_small(stack_a);
	while (*stack_b)
	{
		ft_asign_target(stack_a, stack_b);
		ft_cost(stack_a, stack_b);
		ft_get_cheapest_move(stack_a, stack_b);
	}
	ft_final_rotate(stack_a);
}

void	ft_final_rotate(t_stack **stack)
{
	int	min_pos;
	int	size;

	if (ft_be_sorted(*stack))
		return ;
	size = ft_stacksize(*stack);
	ft_normalize_stack(stack);
	min_pos = ft_get_lowest_index_pos(stack);
	if (min_pos > size / 2)
	{
		while (0 < size - min_pos)
		{
			rra(stack);
			min_pos++;
		}
	}
	else
	{
		while (0 < min_pos)
		{
			ra(stack);
			min_pos--;
		}
	}
}
