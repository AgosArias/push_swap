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
	int	chunck;

	if (!stack_a || !*stack_a)
		return ;
	sorted = ft_be_sorted(*stack_a);
	chunck = (ft_stacksize(*stack_a) - 4) / 5;
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
			ft_sort_3(stack_a, stack_b);
		}
		else if (ft_stacksize(*stack_a) == 4)
		{
			ft_sort_4(stack_a, stack_b);
		}
		else
		{
			ft_print_stack(*stack_a);
			ft_sort_stack(stack_a, stack_b, chunck);
		}
		break ;
		sorted = ft_be_sorted(*stack_a);
	}
}

void ft_normalize_stack(t_stack **stack)
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
void	ft_sort_4(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_be_sorted(*stack_a))
		return ;
	if (ft_head_is_min(*stack_a))
	{
		pb(stack_a, stack_b);
		ft_sort_3(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
	else if (ft_head_is_min((*stack_a)->next))
	{
		*stack_a = ra(*stack_a);
		pb(stack_a, stack_b);
		ft_sort_3(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
	else if (ft_head_is_min((*stack_a)->next->next))
	{
		*stack_a = ra(*stack_a);
		*stack_a = ra(*stack_a);
		pb(stack_a, stack_b);
		ft_sort_3(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
	else
	{
		*stack_a = rra(*stack_a);
		pb(stack_a, stack_b);
		ft_sort_3(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
}
void	ft_sort_stack(t_stack **stack_a, t_stack **stack_b, int chunck)
{
	t_stack	*node;

	node = *stack_a;
	printf("Sorting stack...%d\n", chunck);
	ft_normalize_stack(stack_a);
	while (node ->next)
	{
		if ( node -> index < chunck)
			pb(stack_a, stack_b);
		node = node->next;
	}
	printf("aca");
	ft_print_stack(*stack_b);


}

int	ft_head_is_max(t_stack *stack)
{
	t_stack	*node;

	if (!stack)
		return (0);
	node = stack ->next;
	while (node->next)
	{
		if (node->index > stack->index)
			return (0);
		node = node->next;
	}
	return (1);
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
void ft_sort_3(t_stack **stack_a, t_stack **stack_b)
{
	if(ft_be_sorted(*stack_a))
		return ;
	if (ft_head_is_max(*stack_a))
	{
		if (ft_head_is_min(*stack_b))
			rr(stack_a, stack_b);
		else
			*stack_a = ra(*stack_a);
		if (ft_be_swapped_a(*stack_a))
		{
			if (ft_be_swapped_b(*stack_b))
				ss(*stack_a, *stack_b);
			else
				sa(*stack_a);
		}
	}
	else if (ft_head_is_max((*stack_a)->next))
	{
		if (ft_head_is_min((*stack_b)->next))
			rrr(stack_a, stack_b);
		else
			*stack_a = rra(*stack_a);
		if (ft_be_swapped_a(*stack_a))
		{
			if (ft_be_swapped_b(*stack_b))
				ss(*stack_a, *stack_b);
			else
				sa(*stack_a);
		}
	}
	else if (ft_be_swapped_a(*stack_a))
	{
		if (ft_be_swapped_b(*stack_b))
			ss(*stack_a, *stack_b);
		else
			sa(*stack_a);
	}
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
int	ft_be_swapped_b(t_stack *stack)
{
	t_stack	*node;

	if (!stack || !stack->next)
		return (0);
	node = stack;
	if (node->index < node->next->index)
			return (1);
	return (0);
}