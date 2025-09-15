/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:44:53 by aarias-d          #+#    #+#             */
/*   Updated: 2025/09/09 17:15:46 by aarias-d         ###   ########.fr       */
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
	int				position;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	int				total_cost;
}	t_stack;

/*FT in LIBFT*/
char	*ft_strchr(char *s, int c);
char	*ft_strchr(char *s, int c);
char	*ft_strdup(char *src);
size_t	ft_strlen(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
char	**ft_split(char const *s, char c);

/*FT in srcs/algo*/
void	ft_sort(t_stack **stack_a, t_stack **stack_b);
void	ft_sort_small(t_stack **stack_a);
void	ft_sort_3(t_stack **stack_a);
void	ft_do_cheapest_move(t_stack **stack_a, t_stack **stack_b, int cost_a, int cost_b);
void	ft_asign_target(t_stack **stack_a, t_stack **stack_b);
void	ft_cost(t_stack **stack_a, t_stack **stack_b);
int		ft_head_is_max(t_stack *stack);
int		ft_be_swapped_a(t_stack *stack);
int		ft_get_lowest_index_pos(t_stack **stack);
void	ft_final_rotate(t_stack **stack);
void	ft_normalize_stack(t_stack **stack);

/*FT in srcs/parsing*/
char	**get_arguments(char **arg, int argc);
void	ft_free_strings(char **lst);
int		ft_add_index(t_stack *stack);


/*FT in srcs/stacks*/
t_stack	*ft_create_stack( char **str);
void	ft_free_stack(t_stack **stack);
void	ft_print_stack(t_stack *stack); //DELETE
int		ft_stacksize(t_stack *stack);
int		ft_be_sorted(t_stack *stack);
t_stack	*ft_stacknew(int content);
void	ft_stackadd_back(t_stack **stack, t_stack *new);


/*FT in srcs/stacks/op*/
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);




/* Lib Stack FT
t_stack	*ft_stacknew(int content);
void	ft_stackadd_back(t_stack **stack, t_stack *new);
t_stack	*ft_create_stack( char **str);
void	ft_free_stack(t_stack **stack);
void	ft_free_strings(char **lst);
int	ft_check_duplicates(char **lst);
char	**getegid(char** arg, int argc);
void	ft_print_stack(t_stack *stack);
t_stack	*ft_min(t_stack *stack);
int	ft_add_index(t_stack *stack);
int ft_be_sorted(t_stack *stack);
int	ft_stacksize(t_stack *stack);
void	ft_sort(t_stack **stack_a, t_stack **stack_b);
void ft_normalize_stack(t_stack **stack);


//funtions to check if stack is need to be changed
int	ft_be_swapped_a(t_stack *stack);
int	ft_be_swapped_b(t_stack *stack);
int	ft_head_is_min(t_stack *stack);
int	ft_head_is_max(t_stack *stack);
void	ft_sort_3(t_stack **stack_a, t_stack **stack_b);
void	ft_sort_4(t_stack **stack_a, t_stack **stack_b);
void	ft_sort_stack(t_stack **stack_a, t_stack **stack_b, int chunck);




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

LIBFT
char	**ft_split(char const *s, char c);
int		ft_isdigit(int c);
int		ft_atoi(const char *str);
char	*ft_strchr(char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(char *src);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
*/
#endif
