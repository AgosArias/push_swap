#include "push_swap.h"

t_stack	*ft_reverse_rotate(t_stack *stack)
{
	t_stack	*first;

	if (!stack)
		return (NULL);
	first = stack;
	while (stack -> next)
		stack = stack->next;
	stack -> prev -> next = NULL;
	stack -> prev = NULL; 
	stack -> next = first;
	first -> prev = stack;
	return (stack);
}

t_stack	*rra(t_stack *a)
{
	if (!a)
		return (NULL);
	a = ft_reverse_rotate(a);
	write(1,"rra\n",4);
	return (a);
}

t_stack	*rrb(t_stack *b)
{
	if (!b)
		return (NULL);
	b = ft_reverse_rotate(b);
	write(1,"rra\n",4);
	return (b);
}

void	rrr(t_stack **a, t_stack **b)
{
	if (!a || !b || !*a || !*b)
		return ;
	*a = ft_reverse_rotate(*a);
	*b = ft_reverse_rotate(*b);
	write(1,"rrr\n",4);
}