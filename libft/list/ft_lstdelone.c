#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list *node;

	node = lst;
	lst = lst -> next;
	del(node);
}
