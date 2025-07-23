#include "push_swap.h"

int main( int argc, char **argv)
{
    int i;
    t_stack	*node;
    int num;    
    t_stack	*stack_a;


    if(argc < 2)
        return(0);	
	i = 1;
	//ft_fill_stack = if (argc = 3 && ft_strchar(argv[2], " "))
	
		

	
	

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

}



/*
Verifica si se han proporcionado suficientes argumentos en la línea de comandos.
Inicializa dos pilas vacías (stack_a y stack_b).
Incluye los argumentos válidos en la pila stack_a utilizando la función ft_stacknew.
Verifica si la pila stack_a tiene duplicados utilizando la función ft_be_duplicated.
Verifica si la pila stack_a está ordenada utilizando la función be_sorted.
Si la pila no está ordenada, llama a la función ft_sort para ordenarla.
Libera la memoria utilizada por las pilas utilizando la función ft_free_all
*/