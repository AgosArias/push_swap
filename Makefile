# ╔════════════════════════════════════╗
# ║          PUSH_SWAP MAKEFILE        ║
# ╚════════════════════════════════════╝

# ──────🎯 TARGET NAME ──────
NAME    := push_swap

# ──────⚙️ COMPILER & FLAGS ──────
CC      := cc
CFLAGS  := -Wall -Wextra -Werror -I.

# ──────📁 SOURCE FILES ──────
SRC     := \
    push_swap.c \
    main.c \
    util/ft_stack.c \
    util/ft_arguments.c \
    libft/ft_atoi.c \
    libft/ft_isdigit.c \
    libft/ft_strchar.c \
    libft/ft_split.c \
    libft/ft_substr.c \
    libft/ft_strdup.c \
    libft/ft_strlen.c

# ──────🧱 OBJECTS & HEADERS ──────
OBJ     := $(SRC:.c=.o)
DEPS    := push_swap.h

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
	@echo "🚀 Ejecutando test de ejemplo:"
	@./$(NAME) "57 11 58 0 -9 4 45"
	@$(RM) $(OBJ)
