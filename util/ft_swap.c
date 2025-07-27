#include "push_swap.h"

void	ft_swap(t_stack *a, t_stack *b)
{
	t_stack	*x;

	if (!a || !b)
		return ;
	x = ft_stacknew(0);
	x -> content = a -> content;
	x -> index = a -> index;
	a -> content = b -> content;
	a -> index = b -> index;
	b -> content = x -> content;
	b -> index = x -> index;
}

void	sa(t_stack *stack)
{
	if (!stack || !stack->next)
		return ;
	ft_swap(stack, stack->next);
	write(1,"sa\n",3);
}

void	sb(t_stack *stack)
{
	if (!stack || !stack->next)
		return ;
	ft_swap(stack, stack->next);
	write(1,"sb\n",3);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	if (!stack_a || !stack_a->next || !stack_b || !stack_b->next)
		return ;
	ft_swap(stack_a, stack_a->next);
	ft_swap(stack_b, stack_b->next);
	write(1,"ss\n",3);
}