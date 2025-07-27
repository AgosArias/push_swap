#include "push_swap.h"

t_stack	*ra(t_stack *a)
{
	if (!a)
		return (NULL);
	a = ft_rotate(a);
    write(1,"ra\n",3);
	return(a);

} 

t_stack	*rb(t_stack *b)
{
	if (!b)
		return (NULL);
	b = ft_rotate(b);
    write(1,"rb\n",3);
	return(b);

} 

void	rr(t_stack **a, t_stack **b)
{
	if (!b || !a || !*b || !*a)
		return ;
	*a = ft_rotate(*a);
	*b = ft_rotate(*b);
    write(1,"rr\n",3);
} 

t_stack	*ft_rotate(t_stack *stack)
{
	t_stack	*actual;
	t_stack *first;

    if (!stack)
		return (NULL);
	actual = stack;
	first = stack;
	while (stack -> next)
	{
		stack -> prev = stack ->next;
		stack -> next = actual;
		stack = stack -> prev;
		actual = stack -> prev;
	}
	stack -> prev = NULL;
	stack -> next = actual;
	first -> next = NULL; 
	return(stack);
}  
