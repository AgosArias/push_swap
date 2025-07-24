#include "push_swap.h"
#include <stdio.h>

void ft_swap(t_stack *a, t_stack *b)
{
	t_stack *x;

	x -> next = a -> next;
	x -> prev = a -> prev;
	x -> content = a -> content;
	x -> index = a -> index;
	a -> next = b -> next;
	a -> prev = b -> prev;
	a -> content = b -> content;
	a -> index = b -> index;
	b -> next = x -> next;
	b -> prev = x -> prev;
	b -> content = x -> content;
	b -> index = x -> index;
}

