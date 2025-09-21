/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agossariass <agossariass@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:39:54 by aarias-d          #+#    #+#             */
/*   Updated: 2025/09/21 20:47:35 by agossariass      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main( int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**arg;

	stack_a = NULL;
	if (argc < 2)
		return (0);
	argv++;
	arg = get_arguments(argv, argc - 1);
	stack_a = ft_create_stack(arg);
	ft_free_strings(arg);
	if (!stack_a)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	stack_b = NULL;
	ft_add_index(stack_a);
	ft_sort(&stack_a, &stack_b);
	ft_free_stack(&stack_a);
	ft_free_stack(&stack_b);
	return (0);
}
