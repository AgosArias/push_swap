#include "push_swap.h"
#include <stdio.h>

void ft_swap(t_stack *a, t_stack *b)
{
	t_stack *x;

	x -> content = a -> content;
	x -> index = a -> index;
	a -> content = b -> content;
	a -> index = b -> index;
	b -> content = x -> content;
	b -> index = x -> index;
}

