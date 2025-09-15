/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:53:22 by aarias-d          #+#    #+#             */
/*   Updated: 2025/09/01 18:53:48 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		if (!(node -> index) && (!min || min ->content > node ->content))
			min = node;
		node = node -> next;
	}
	if (!min || min -> index)
		return (NULL);
	return (min);
}

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
		min = ft_min(node);
	}
	return (1);
}
