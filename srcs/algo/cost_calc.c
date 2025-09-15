/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_calc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:24:13 by aarias-d          #+#    #+#             */
/*   Updated: 2025/09/09 17:24:13 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	ft_get_total_cost(t_stack *node)
{
	int	cost_a;
	int	cost_b;

	cost_a = node->cost_a;
	cost_b = node->cost_b;
	if (cost_a < 0 && cost_b < 0)
	{
		if (ft_abs(cost_a) > ft_abs(cost_b))
			return (ft_abs(cost_a));
		else
			return (ft_abs(cost_b));
	}
	else if (cost_a > 0 && cost_b > 0)
	{
		if (cost_a > cost_b)
			return (cost_a);
		else
			return (cost_b);
	}
	else
		return (ft_abs(cost_a) + ft_abs(cost_b));
}
void	ft_cost(t_stack **stack_a, t_stack **stack_b)
{
	int		size_a;
	int		size_b;
	t_stack	*tmp_b;

	size_a = ft_stacksize(*stack_a);
	size_b = ft_stacksize(*stack_b);
	tmp_b = *stack_b;
	while (tmp_b)
	{
		tmp_b->cost_b = tmp_b->position;
		if (tmp_b->position > size_b / 2)
			tmp_b->cost_b = (size_b - tmp_b->position) * -1;
		tmp_b ->cost_a = tmp_b->target_pos;
		if (tmp_b->target_pos > size_a / 2)
			tmp_b->cost_a = (size_a - tmp_b->target_pos) * -1;
		tmp_b ->total_cost = ft_get_total_cost(tmp_b);
		tmp_b = tmp_b->next;
	}
}

