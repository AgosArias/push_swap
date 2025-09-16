/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_best_move.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:24:07 by aarias-d          #+#    #+#             */
/*   Updated: 2025/09/09 17:24:09 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_do_cheapest_move(t_stack **stack_a, t_stack **stack_b, int cost_a, int cost_b)
{
	while (cost_a > 0 && cost_b > 0)
	{
		rr(stack_a, stack_b);
		cost_a--;
		cost_b--;
	}
	while (cost_a < 0 && cost_b < 0)
	{
		rrr(stack_a, stack_b);
		cost_a++;
		cost_b++;
	}
	while (cost_a > 0)
	{
		ra(stack_a);
		cost_a--;
	}
	while (cost_a < 0)
	{
		rra(stack_a);
		cost_a++;
	}
	while (cost_b > 0)
	{
		rb(stack_b);
		cost_b--;
	}
	while (cost_b < 0)
	{
		rrb(stack_b);
		cost_b++;
	}
	pa(stack_a, stack_b);
}

void	ft_get_cheapest_move(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*best;
	t_stack	*tmp;

	if (!stack_b || !*stack_b)
		return ;
	best = *stack_b;
	tmp = *stack_b;
	while (tmp)
	{
		if (tmp->total_cost < best->total_cost)
			best = tmp;
		tmp = tmp->next;
	}
	ft_do_cheapest_move(stack_a, stack_b, best->cost_a, best->cost_b);
}
