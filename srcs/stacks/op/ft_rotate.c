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

#include "../../../push_swap.h"

t_stack	*ra(t_stack *a)
{
	if (!a)
		return (NULL);
	a = ft_rotate(a);
	write(1,"ra\n",3);
	return (a);
}

t_stack	*rb(t_stack *b)
{
	if (!b)
		return (NULL);
	b = ft_rotate(b);
	write(1,"rb\n",3);
	return (b);
}

void	rr(t_stack **a, t_stack **b)
{
	if (!b || !a || !*b || !*a)
		return ;
	*a = ft_rotate(*a);
	*b = ft_rotate(*b);
	write(1,"rr\n",3);
}

t_stack	*ft_rotate(t_stack *stack)
{
	t_stack	*node;
	t_stack	*first;

	if (!stack)
		return (NULL);	
	node = stack;
	stack = stack ->next;
	first = stack;
	stack -> prev = NULL;
	while (stack ->next)
		stack = stack ->next;
	stack -> next = node;
	node ->prev = stack;
	node ->next = NULL;
	return (first);
}
