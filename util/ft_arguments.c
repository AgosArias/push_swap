#include "push_swap.h"

int ft_check_duplicates(char **lst)
{
	int x; 
	int y;

	if (!lst)
		return (0);
	x = 0;
	while (lst[x])
	{
		y = x +1;
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
void ft_free_strings(char **lst)
{
	char **tmp;
	
	tmp = lst;
	while (lst && *lst)
	{
		if (*lst)
			free(*lst);
		lst++;
	}
	if(tmp)
		free(tmp);
}