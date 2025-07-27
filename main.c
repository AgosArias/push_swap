/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:39:54 by aarias-d          #+#    #+#             */
/*   Updated: 2025/07/23 18:16:20 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>


int	main( int argc, char **argv)
{	
	t_stack	*stack_a;
	t_stack *stack_b;
	char	**arg;
	int need_free;

	stack_a = NULL;
	if (argc < 2)
		return (0);
	argv++;
	if(argc == 2 && ft_strchr(*argv,' '))
	{
		arg = ft_split(*argv ,' ');
		need_free = 1;
	}
	else
	{
		arg = argv;
		need_free = 0;
	}
	if (ft_check_duplicates(arg) == 1)
	{
		if (need_free)
			ft_free_strings(arg);
		return (0);
	}
	stack_a = ft_create_stack(arg);
	if (!stack_a)
	{
		if (need_free)
			ft_free_strings(arg);
		return(0);
	}
	stack_b = NULL;
	if (need_free)
		ft_free_strings(arg);
	
	ft_print_stack(stack_a);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	ra(&stack_a);
	ft_print_stack(stack_a);
	ft_free_stack(&stack_a);
	ft_print_stack(stack_b);
	ft_free_stack(&stack_b);

	if (!stack_a)
		return(0);
	return (0);
}

/*Se tiene que validar que los datos esten correctos (que sean int)
	while(i < argc)
	{
		printf("Numero: %s\nIndex:%i\n",argv[i], i);
		num = ft_atoi(argv[i]);
		node = ft_lstnew(num);
		stack = ft_lstlast(node);
		i++;
	}
//ademas de pasar char* a int
	num = stack->content;
	printf("mi nodo es : %i" , num);

*/
/*
Verifica si se han proporcionado suficientes argumentos en la línea de comandos.
Inicializa dos pilas vacías (stack_a y stack_b).
Incluye los argumentos válidos en la pila stack_a utilizando la función ft_stacknew.
Verifica si la pila stack_a tiene duplicados utilizando la función ft_be_duplicated.
Verifica si la pila stack_a está ordenada utilizando la función be_sorted.
Si la pila no está ordenada, llama a la función ft_sort para ordenarla.
Libera la memoria utilizada por las pilas utilizando la función ft_free_all
*/
