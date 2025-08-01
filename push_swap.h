/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 20:06:23 by aarias-d          #+#    #+#             */
/*   Updated: 2025/07/23 18:21:58 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
	struct s_stack	*prev;
	int				index;
}	t_stack;

/* Lib Stack FT*/
t_stack	*ft_stacknew(int content);
void	ft_stackadd_back(t_stack **stack, t_stack *new);
t_stack	*ft_create_stack( char **str);
void	ft_free_stack(t_stack **stack);
void	ft_free_strings(char **lst);
int	ft_check_duplicates(char **lst);
void	ft_print_stack(t_stack *stack);


/*Operations */
void	ft_swap(t_stack *a, t_stack *b);
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
t_stack	*ra(t_stack *a);
t_stack	*rb(t_stack *b);
void	rr(t_stack **a, t_stack **b);
t_stack	*ft_rotate(t_stack *stack);
t_stack	*ft_reverse_rotate(t_stack *stack);
void	rrr(t_stack **a, t_stack **b);
t_stack	*rrb(t_stack *b);
t_stack	*rra(t_stack *a);




/*LIBFT*/
char	**ft_split(char const *s, char c);
int	ft_isdigit(int c);
int	ft_atoi(const char *str);
char    *ft_strchr(char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(char *src);
size_t	ft_strlen(const char *str);




/*
t_list  *ft_lstnew(int content);
//void    ft_lstadd_front(t_list **lst, t_list *new);
int     ft_lstsize(t_list *lst);
t_list  *ft_lstlast(t_list *lst);
//void    ft_lstadd_back(t_list **lst, t_list *new);
void    ft_lstdelone(t_list *lst, void (*del)(void*));
void    ft_lstclear(t_list **lst, void (*del)(void*));
void    ft_lstiter(t_list *lst, void (*f)(void *));
t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
*/

#endif
