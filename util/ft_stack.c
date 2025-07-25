/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:21:03 by aarias-d          #+#    #+#             */
/*   Updated: 2025/07/23 18:21:04 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int num;
	t_stack	*node;
	
	if (!str || !*str|| !**str)
	{
		printf("[null]\n");
		return ;
	}
	
	while (*str)
	{
		ft_stackadd_back(&node,ft_stacknew(atoi(*str)));
		str++;
	}

	/*print stack a */
	while(node)
	{
		num = node -> content;
		printf("[%i]\n", num);
		node = node -> next;
	}
	printf("-----\n");
	printf("STACK A\n");

}