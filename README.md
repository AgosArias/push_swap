# push_swap

Proyecto de 42 que ordena una pila de números utilizando un conjunto limitado de operaciones. El objetivo es producir la secuencia más corta posible de movimientos para dejar la pila A en orden ascendente.

## 🧱 Estructura

- **libft/**: Implementaciones propias de funciones básicas de C.
- **srcs/parsing/**: Obtención y validación de argumentos de entrada.
- **srcs/stacks/**: Creación y utilidades de la estructura de pila, así como las operaciones obligatorias (`sa`, `pb`, `ra`, etc.).
- **srcs/algo/**: Funciones de ordenación para casos pequeños y utilidades para el algoritmo general.
- **util/**: Funciones auxiliares como comprobación de si la pila está ordenada.

## 🧩 Operaciones soportadas

- `sa`, `sb`, `ss` — swap
- `pa`, `pb` — push entre pilas
- `ra`, `rb`, `rr` — rotate
- `rra`, `rrb`, `rrr` — reverse rotate

El programa escribe por stdout la secuencia de operaciones necesarias para ordenar.

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

```bash
# 100 números únicos aleatorios del rango 0..500
./push_swap $(shuf -i 0-500 -n 100) | grep -E '^(sa|sb|ss|pa|pb|ra|rb|rr|rra|rrb|rrr)$' | wc -l

# Entrada ya ordenada (debería devolver 0 movimientos)
./push_swap $(seq 0 500) | grep -E '^(sa|sb|ss|pa|pb|ra|rb|rr|rra|rrb|rrr)$' | wc -l

```

## 🧠 Resumen del algoritmo

1. Parsing y validación: argumentos, duplicados y creación de `stack_a`.
2. Indexado: se asigna a cada nodo un índice relativo (1..N) según su valor.
3. Caso pequeño: si `A` tiene ≤ 3 elementos, se ordena con reglas específicas.
4. Fase 1: mover desde `A` a `B` hasta dejar 3 en `A`.
5. Fase 2: para cada nodo en `B`, calcular posición objetivo en `A`, costes `cost_a/cost_b` y escoger el nodo de coste total mínimo para reinserción.
6. Rotación final: alinear mínimo en cabeza de `A`.
