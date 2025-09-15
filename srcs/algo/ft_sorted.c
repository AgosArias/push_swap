#include "push_swap.h"

void	ft_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	size;
	int	push;

	size = ft_stacksize(*stack_a);
	push = 0;
	while (size - push > 3)
	{
		pb(stack_a, stack_b);
		push++;
	}
	ft_sort_small(stack_a);
	while (stack_b)
	{
		ft_asign_target(stack_a, stack_b);
		ft_cost(stack_a, stack_b);
		ft_do_cheapest_move(stack_a, stack_b, (*stack_b)->cost_a, (*stack_b)->cost_b);
	}
	ft_final_rotate(stack_a);
}

void	ft_final_rotate(t_stack **stack)
{
	int	min_pos;
	int	size;

	size = ft_stacksize(*stack);
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


