#include "push_swap.h"

int	ft_add_index(t_stack *stack)
{
	t_stack	*node;
	t_stack	*min;
	int		index;

	if (!stack)
		return (0);
	node = stack;
	index = 1;
	min = ft_min(stack);
	while (min)
	{
		min -> index = index++;
		printf("min: %d\nindex %d\n", min->content,min->index);
		min = ft_min(node);

	}
	return (1);
}

t_stack	*ft_min(t_stack *stack)
{
	t_stack	*node;
	t_stack	*min;

	if (!stack)
		return (NULL);
	node = stack;
	min = NULL;
	while (node)
	{
		if (!(node -> index) && ( !min || min ->content > node ->content )  )
			min = node;
		node = node -> next;
	}
	if (!min || min -> index)
		return (NULL);
	return (min);
}