#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list  *lst_out;

    if(!lst || !f || !del)
        return (NULL);
    lst_out = NULL;
    while (lst)
    {
        ft_lstadd_back(&lst_out, ft_lstnew(f(lst->content)));
        if (!lst_out)
        {
            ft_lstclear(&lst, del);
            return (NULL);
        }    
        lst = lst->next;
    }
    return(lst_out);
}

/*Itera la lista ’lst’ y aplica la función ’f’ al
contenido de cada nodo. Crea una lista resultante
de la aplicación correcta y sucesiva de la función
’f’ sobre cada nodo. La función ’del’ se utiliza
para eliminar el contenido de un nodo, si hace
falta*/

int main()
{
    return(0);
}