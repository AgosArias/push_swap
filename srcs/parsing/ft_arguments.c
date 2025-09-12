/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:51:51 by aarias-d          #+#    #+#             */
/*   Updated: 2025/05/29 17:23:14 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_duplicates(char **lst)
{
	int	x;
	int	y;

	if (!lst)
		return (0);
	x = 0;
	while (lst[x])
	{
		y = x + 1;
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
		arguments = (char **)malloc(sizeof(char *) * argc);
		i = 0;		
		while (*arg)
		{
			arguments[i] = ft_strdup(*arg);
			i++;
			arg++;
		}
	}
	if (ft_check_duplicates(arguments) == 1)
	{
		ft_free_strings(arguments);
		return (NULL);
	}
	return (arguments);
}
