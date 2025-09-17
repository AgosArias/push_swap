/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_best_move.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agossariass <agossariass@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:24:07 by aarias-d          #+#    #+#             */
/*   Updated: 2025/09/17 17:26:38 by agossariass      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_move_stack_b(t_stack **stack_b, int cost_b)
{
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
}

void	ft_move_stack_a(t_stack **stack_a, int cost_a)
{
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
}

void	ft_do_cheapest_move(t_stack **a, t_stack **b, int cost_a, int cost_b)
{
	while (cost_a > 0 && cost_b > 0)
	{
		rr(a, b);
		cost_a--;
		cost_b--;
	}
	while (cost_a < 0 && cost_b < 0)
	{
		rrr(a, b);
		cost_a++;
		cost_b++;
	}
	ft_move_stack_a(a, cost_a);
	ft_move_stack_b(b, cost_b);
	pa(a, b);
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
