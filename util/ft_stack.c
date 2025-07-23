#include "push_swap.h"

t_stack	*ft_stacknew(int content)
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

void	ft_stackadd_back(t_stack **stack, t_stack *new)
{
	t_stack	*node;
	
	if(!new)
		return;
	if(!*stack)
	{
		*stack = new;
	       return ;	
	}
	node = *stack;
	while (node -> next != NULL)
		node = node -> next;
	node -> next = new;
	new -> prev = node;
}

void	ft_create_stack( char **str)
{
	char *temp = *str;
	while (**str)
	{
		printf("[%s]", *str);
		str++;
	}
}