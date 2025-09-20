/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agossariass <agossariass@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:53:22 by aarias-d          #+#    #+#             */
/*   Updated: 2025/09/17 17:26:29 by agossariass      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack *a, t_stack *b)
{
	int	index;
	int	content;

	if (!a || !b)
		return ;
	content = a -> content;
	index = a -> index;
	a -> content = b -> content;
	a -> index = b -> index;
	b -> content = content;
	b -> index = index;
}

void	sa(t_stack *stack)
{
	if (!stack || !stack->next)
		return ;
	ft_swap(stack, stack->next);
	write(1, "sa\n", 3);
}

void	sb(t_stack *stack)
{
	if (!stack || !stack->next)
		return ;
	ft_swap(stack, stack->next);
	write(1, "sb\n", 3);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	if (!stack_a || !stack_a->next || !stack_b || !stack_b->next)
		return ;
	ft_swap(stack_a, stack_a->next);
	ft_swap(stack_b, stack_b->next);
	write(1, "ss\n", 3);
}
