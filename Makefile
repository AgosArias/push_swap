# ╔════════════════════════════════════╗
# ║          PUSH_SWAP MAKEFILE        ║
# ╚════════════════════════════════════╝

# ──────🎯 TARGET NAME ──────
NAME    := push_swap

# ──────⚙️ COMPILER & FLAGS ──────
CC      := cc
CFLAGS  := -Wall -Wextra -Werror -Iincludes

# ──────📁 SOURCE FILES ──────
SRC :=  main.c \
srcs/stacks/stack_utils.c \
srcs/stacks/op/ft_push.c \
srcs/stacks/op/ft_rotate.c \
srcs/stacks/op/ft_reverse_rotate.c \
srcs/stacks/op/ft_swap.c \
srcs/stacks/stack_init.c \
srcs/algo/choose_best_move.c \
srcs/algo/sort_three.c \
srcs/algo/sort_small.c \
srcs/algo/ft_sorted.c \
srcs/algo/cost_utils.c \
srcs/algo/cost_calc.c \
srcs/parsing/ft_arguments.c \
srcs/parsing/ft_add_index.c \
libft/ft_split.c \
libft/ft_strlen.c \
libft/ft_substr.c \
libft/ft_atoi.c \
libft/ft_strchar.c \
libft/ft_strdup.c \
libft/ft_isdigit.c

# ──────🧱 OBJECTS & HEADERS ──────
OBJ     := $(SRC:.c=.o)
DEPS    := includes/push_swap.h

# ──────🧹 CLEANUP ──────
RM      := rm -f

# ──────🔧 RULES ──────
.PHONY: all clean fclean re test

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $@ $^

%.o: %.c $(DEPS)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	@echo "🧹 Objetos eliminados."

fclean: clean
	@$(RM) $(NAME)
	@echo "💥 Ejecutable eliminado."

re: fclean all

test: $(NAME)
	@$(RM) $(OBJ)
	@echo "🚀 Ejecutando test de ejemplo:"
	@bash -c './$(NAME) $$(seq 1 100 | shuf)'
