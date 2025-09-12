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

char	*ft_strchr(char *s, int c)
{
	int	count;
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

