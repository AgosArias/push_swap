+45
-0

# push_swap

Proyecto de 42 que ordena una pila de números utilizando un conjunto limitado de operaciones. El objetivo es producir la secuencia más corta posible de movimientos para dejar la pila A en orden ascendente.

## 🧱 Estructura

- **libft/**: Implementaciones propias de funciones básicas de C.
- **srcs/parsing/**: Obtención y validación de argumentos de entrada.
- **srcs/stacks/**: Creación y utilidades de la estructura de pila, así como las operaciones obligatorias (`sa`, `pb`, `ra`, etc.).
- **srcs/algo/**: Funciones de ordenación para casos pequeños y utilidades para el algoritmo general.
- **util/**: Funciones auxiliares como comprobación de si la pila está ordenada.

## ⚙️ Compilación

```bash
make            # Genera el ejecutable push_swap
make clean      # Elimina los objetos
make fclean     # Elimina objetos y el ejecutable
make re         # Reconstruye desde cero
make test       # Prueba rápida con 100 números aleatorios
```

## 🚀 Uso

```bash
./push_swap 2 1 3 6 5 8
./push_swap "3 2 1"
```

El programa imprimirá las operaciones necesarias para ordenar los valores.

## 📦 Funcionamiento

1. **Parsing**: Validación de números, gestión de argumentos y comprobación de duplicados.
2. **Construcción de pilas**: Se inicializa `stack_a` con los valores de entrada e `index` para cada nodo.
3. **Algoritmo**:
   - Casos pequeños (≤5 números) resueltos con funciones específicas (`ft_sort_3`, `ft_sort_4`).
   - Casos grandes: se asignan índices y se emplea una estrategia para mover elementos entre `stack_a` y `stack_b` antes de reinsertarlos ordenados.
4. **Operaciones**: Todas las acciones (`sa`, `pb`, `rra`, etc.) se registran como salida.

## 🧪 Tests

Puedes generar conjuntos de prueba mayores y verificar el número de instrucciones:

```bash
ARG=$(seq 1 100 | shuf | tr '\n' ' ')
./push_swap $ARG | wc -l    # Cuenta de movimientos
```
