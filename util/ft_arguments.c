#include "push_swap.h"

int ft_check_duplicates(char **lst)
{
    char **lst_tmp;

    lst++;
    while (lst)
    {
        lst_tmp = lst++;
        lst_tmp--;
        printf("%s", *lst);
        while (lst_tmp)
        {
            if(ft_atoi(*lst_tmp) == ft_atoi(*lst))
                return(1);
            lst_tmp--;
        }
    }
    return(0);
}
void ft_free_strings(char **lst)
{
    char **tmp;
    
    tmp = lst;
    while (lst)
    {
        if(*lst)
            free(*lst);
        lst++;
    }
    if(tmp)
        free(tmp);
}