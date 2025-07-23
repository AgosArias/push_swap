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

void	ft_create_stack( char **str)
{
	int num;
	t_stack	*node;
	
	while (*str)
	{
		ft_stackadd_back(&node,ft_stacknew(atoi(*str)));
		str++;
	}
	while(node)
	{
		num = node -> content;
		printf("[%i]\n", num);
		node = node -> next;
	}
}

int	main( int argc, char **argv)
{	
	t_stack	*stack_a;
	char	**arg;

	stack_a = NULL;
	if (argc < 2)
		return (0);
	argv++;
	arg = argv;
	ft_create_stack(arg);
	if (!stack_a)
		return(0);
	return (0);
}

//se tiene que ver como se guardan los argumentos si ./a.out 4 5 6 o ./a.out "4 5 6"
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
