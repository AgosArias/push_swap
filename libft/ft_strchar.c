#include "push_swap.h"

char    *ft_strchr(char *s, int c)
{
        int             count;
        char    *d;

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

