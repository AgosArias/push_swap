/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agossariass <agossariass@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:24:19 by aarias-d          #+#    #+#             */
/*   Updated: 2025/09/17 17:26:50 by agossariass      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_small(t_stack **stack_a)
{
	int	size;

	size = ft_stacksize(*stack_a);
	if (ft_be_sorted(*stack_a))
		return ;
	else if (size == 2 && !ft_be_sorted(*stack_a))
		sa(*stack_a);
	else if (size == 3)
		ft_sort_3(stack_a);
}
