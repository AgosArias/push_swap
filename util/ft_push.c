#include "push_swap.h"

void pb(t_stack **a, t_stack **b)
{
    t_stack *node;
    if (!a ||  !*a)
        return ;
    node = *a;
    *a = (*a)->next;
    node->next = *b;
    *b = node;
    write(1,"pb\n", 3);
}

void pa(t_stack **a, t_stack **b)
{
    t_stack *node;
    if (!b ||  !*b)
        return ;
    node = *b;
    *b = (*b)->next;
    node->next = *a;
    *a = node;
    write(1,"pa\n", 3);
}   

