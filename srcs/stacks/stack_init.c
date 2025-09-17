/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:44:25 by aarias-d          #+#    #+#             */
/*   Updated: 2025/09/01 18:48:36 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_create_stack( char **str)
{
	int		num;
	t_stack	*node;

	if (!str || !*str || !**str)
	{
		write(1, "[null]\n", 7);
		return (NULL);
	}
	node = NULL;
	while (*str)
	{
		num = ft_atoi(*str);
		if (num != 0 || (num == 0 && **str == '0'))
			ft_stackadd_back(&node, ft_stacknew(num));
		else
		{
			ft_free_stack(&node);
			return (NULL);
		}
		str++;
	}
	return (node);
}

t_stack	*ft_stacknew(int content)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	node->prev = NULL;
	node->index = 0;
	node->position = 0;
	return (node);
}

void	ft_stackadd_back(t_stack **stack, t_stack *new)
{
	t_stack	*node;

	if (!new)
		return ;
	if (!*stack)
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

/*void	ft_stackadd_front(t_stack **stack, t_stack *new)
{
	if (stack && new)
	{
		new->next = *stack;
		*stack = new;
	}
}
*/