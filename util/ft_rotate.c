#include "push_swap.h"

t_stack	*ra(t_stack *a)
{
	t_stack	*actual;
	t_stack *first;

    if (!a)
		return (NULL);
	actual = a;
	first = a;
	while (a -> next)
	{
		a -> prev = a ->next;
		a -> next = actual;
		a = a -> prev;
		actual = a -> prev;
	}
	a -> prev = NULL;
	a -> next = actual;
	first -> next = NULL; 
    write(1,"ra\n",3);
	return(a);

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
