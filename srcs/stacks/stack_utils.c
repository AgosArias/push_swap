/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:44:25 by aarias-d          #+#    #+#             */
/*   Updated: 2025/09/01 18:49:19 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

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
static void	ft_putstr_fd(const char *s, int fd)
{
	size_t	len;

	if (!s)
		return ;
	len = 0;
	while (s[len])
		len++;
	write(fd, s, len);
}

static void	ft_putnbr_long(long nb, int fd)
{
	char	c;

	if (nb >= 10)
		ft_putnbr_long(nb / 10, fd);
	c = '0' + (nb % 10);
	write(fd, &c, 1);
}

static void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	ft_putnbr_long(nb, fd);
}

void	ft_print_stack(t_stack *stack)
{
	t_stack *node;

	ft_putstr_fd("==== ", 1);
	ft_putstr_fd("stack", 1);
	ft_putstr_fd(" ====\n", 1);
	if (!stack)
	{
		ft_putstr_fd("(empty)\n", 1);
		return ;
	}
	ft_putstr_fd("val idx pos tgt cost_a cost_b total\n", 1);
	node = stack;
	while (node)
	{
		ft_putnbr_fd(node->content, 1);
		ft_putstr_fd(" ", 1);
		ft_putnbr_fd(node->index, 1);
		ft_putstr_fd(" ", 1);
		ft_putnbr_fd(node->position, 1);
		ft_putstr_fd(" ", 1);
		ft_putnbr_fd(node->target_pos, 1);
		ft_putstr_fd(" ", 1);
		ft_putnbr_fd(node->cost_a, 1);
		ft_putstr_fd(" ", 1);
		ft_putnbr_fd(node->cost_b, 1);
		ft_putstr_fd(" ", 1);
		ft_putnbr_fd(node->total_cost, 1);
		ft_putstr_fd("\n", 1);
		node = node->next;
	}
	ft_putstr_fd("------------------------------\n", 1);
}