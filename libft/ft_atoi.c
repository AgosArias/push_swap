/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agossariass <agossariass@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:48:35 by aarias-d          #+#    #+#             */
/*   Updated: 2025/09/17 17:28:00 by agossariass      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_next_char(const char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	num;
	int	i;
	int	symbol;

	num = 0;
	i = ft_get_next_char(str);
	symbol = 1;
	if (str[i] == '-')
	{
		symbol = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) == 1 && num == 0)
			num = str[i] - '0';
		else if (ft_isdigit(str[i]) == 1)
			num = num * 10 + (str[i] - '0');
		else
			return (0);
		i++;
	}
	return (num * symbol);
}
