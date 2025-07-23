#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *node;

    if(!lst || !*lst || !del)
        return ;
    while (*lst)
    {
        node = *lst;
        *lst = (*lst)->next;
        del(node -> content);
        free(node);
    }
    *lst = NULL;
}