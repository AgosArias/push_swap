#include "push_swap.h"

int ft_check_duplicates(int **lst)
{
    int **lst_tmp;

    lst++;
    while (**lst)
    {
        lst_tmp = lst++;
        lst_tmp--;
        while (lst_tmp)
        {
            if(lst_tmp == lst)
                return(1);
            lst_tmp--;
        }
    }
    return(0);
}

int **ft_convert_lst(int argc,char **argv)
{
    int num;
    char    **str;
    
    if (!argv || !*argv)
        return (NULL);
    if (argc == 1)
        str = ft_split(argv,' ');
    if (!str)
        return (NULL);
    while (str)
    {
        num = ft_atoi(*str);
        str++;
    }
    
    
    

}