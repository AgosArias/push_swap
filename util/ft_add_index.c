#include "push_swap.h"

int	ft_add_index(t_stack *stack)
{
	t_stack	*node;
	t_stack	*tmp;
	int		index;

	if (!stack)
		return (0);
	node = stack -> next;
	index = 0;
	tmp = stack;
	while (node -> next)
	{
		if (!node -> index && tmp ->content > node ->content)
			tmp = node;
		node = node -> next;
	}

	return (1);
}