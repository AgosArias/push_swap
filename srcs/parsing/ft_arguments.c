/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arguments.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agossariass <agossariass@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:51:51 by aarias-d          #+#    #+#             */
/*   Updated: 2025/09/21 20:29:40 by agossariass      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_int(char *str)
{
	long	num;
	int		sign;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	sign = 1;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	if (*str == '\0')
		return (1);
	num = 0;
	while (*str && ft_isdigit(*str))
	{
		num = (num * 10) + (*str - '0');
		if (sign * num > INT_MAX || sign * num < INT_MIN)
			return (1);
		str++;
	}
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str != '\0')
		return (1);
	return (0);
}

int	ft_check_number(char **lst)
{
	int	x;
	int	y;

	if (!lst)
		return (0);
	x = 0;
	while (lst[x])
	{
		y = x + 1;
		if (ft_check_int(lst[x]) == 1)
			return (1);
		while (lst[y])
		{
			if (ft_atoi(lst[x]) == ft_atoi(lst[y]))
				return (1);
			y++;
		}
		x++;
	}
	return (0);
}

void	ft_free_strings(char **lst)
{
	char	**tmp;

	tmp = lst;
	while (lst && *lst)
	{
		if (*lst)
			free(*lst);
		lst++;
	}
	if (tmp)
		free(tmp);
}

char	**get_arguments(char **arg, int argc)
{
	char	**arguments;
	int		i;

	if (argc == 1 && ft_strchr(*arg, ' '))
		arguments = ft_split(*arg, ' ');
	else
	{
		arguments = (char **)malloc(sizeof(char *) * (argc + 1));
		if (!arguments)
			return (NULL);
		i = 0;
		while (*arg)
		{
			arguments[i] = ft_strdup(*arg);
			i++;
			arg++;
		}
		arguments[i] = NULL;
	}
	if (ft_check_number(arguments) == 1 )
	{
		ft_free_strings(arguments);
		return (NULL);
	}
	return (arguments);
}
