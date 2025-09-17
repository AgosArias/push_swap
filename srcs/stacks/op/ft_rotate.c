/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:51:06 by aarias-d          #+#    #+#             */
/*   Updated: 2025/09/01 18:51:34 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_rotate(t_stack *stack)
{
	t_stack	*head;
	t_stack	*tail;

	if (!stack || !stack->next)
		return (stack);
	head = stack;
	stack = stack ->next;
	tail = stack;
	stack -> prev = NULL;
	while (tail ->next)
		tail = tail ->next;
	tail -> next = head;
	head ->prev = tail;
	head ->next = NULL;
	return (stack);
}

void	ra(t_stack **a)
{
	if (!a || !*a || !(*a)->next)
		return ;
	*a = ft_rotate(*a);
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	if (!b || !*b || !(*b)->next)
		return ;
	*b = ft_rotate(*b);
	write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	if (!b || !a || !*b || !*a || !(*a)->next || !(*b)->next)
		return ;
	*a = ft_rotate(*a);
	*b = ft_rotate(*b);
	write(1, "rr\n", 3);
}
