/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agossariass <agossariass@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:44:25 by aarias-d          #+#    #+#             */
/*   Updated: 2025/09/17 17:26:05 by agossariass      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_stack(t_stack **stack)
{
	t_stack	*node;

	if (!stack ||!*stack)
		return ;
	while (*stack)
	{
		node = *stack;
		*stack = (*stack)->next;
		free(node);
	}
	*stack = NULL;
}

int	ft_stacksize(t_stack *stack)
{
	int		size;
	t_stack	*node;

	size = 0;
	node = stack;
	while (node)
	{
		size++;
		node = node->next;
	}
	return (size);
}

int	ft_be_sorted(t_stack *stack)
{
	t_stack	*node;

	if (!stack || !stack->next)
		return (1);
	node = stack;
	while (node->next)
	{
		if (node->index > node->next->index)
			return (0);
		node = node->next;
	}
	return (1);
}
