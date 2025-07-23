#include "push_swap.h"

t_stack	*ft_stacknew(void *content)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
    node->prev = NULL;
	return (node);
}