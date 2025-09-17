/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agossariass <agossariass@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:51:51 by aarias-d          #+#    #+#             */
/*   Updated: 2025/09/17 17:28:00 by agossariass      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strchr(char *s, int c)
{
	int		count;
	char	*d;

	if (!s)
		return (NULL);
	d = (char *)s;
	count = 0;
	while (d[count])
	{
		if (d[count] == (char)c)
			return (&d[count]);
		count++;
	}
	if ((char)c == '\0')
		return (&d[count]);
	return (NULL);
}
