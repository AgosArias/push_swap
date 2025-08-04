#include "push_swap.h"

int	ft_be_sorted(t_stack *stack)
{
	t_stack	*node;

	if (!stack || !stack->next)
		return (1);
	node = stack;
	while (node->next)
	{
		if (node->index > node->next->index)
			return (0);
		node = node->next;
	}
	return (1);
}

void	ft_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	sorted;

	if (!stack_a || !*stack_a)
		return;
	sorted = ft_be_sorted(*stack_a);
	while (sorted == 0)
	{
		if (ft_stacksize(*stack_a) == 2)
		{ 
			if (*stack_b && (*stack_b)->next && ft_be_swapped_b(*stack_b))
					ss(*stack_a, *stack_b);
			else
				sa(*stack_a);		
		}
		else if (ft_stacksize(*stack_a) == 3)
		{
			if (ft_head_is_min(*stack_a))
			{
				*stack_a = ra(*stack_a);
				/*if (ft_be_swapped_a(*stack_a))
				{
					sa(*stack_a);
				}*/
			} 
		}
		sorted = ft_be_sorted(*stack_a);
	}
}







int	ft_head_is_min(t_stack *stack)
{
	t_stack	*node;

	if (!stack)
		return (0);
	node = stack ->next;
	while (node->next)
	{
		if (node->index < stack->index)
			return (0);
		node = node->next;
	}
	return (1);
}


int	ft_be_swapped_a(t_stack *stack)
{
	t_stack	*node;

	if (!stack || !stack->next)
		return (0);
	node = stack;
	if (node->index < node->next->index)
			return (1);
	return (0);
}
int	ft_be_swapped_b(t_stack *stack)
{
	t_stack	*node;

	if (!stack || !stack->next)
		return (0);
	node = stack;
	if (node->index > node->next->index)
			return (1);
	return (0);
}