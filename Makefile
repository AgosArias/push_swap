# ╔════════════════════════════════════╗
# ║          PUSH_SWAP MAKEFILE        ║
# ╚════════════════════════════════════╝

# ──────🎯 TARGET NAME ──────
NAME    := push_swap

# ──────⚙️ COMPILER & FLAGS ──────
CC      := cc
CFLAGS  := -Wall -Wextra -Werror -I.

# ──────📁 SOURCE FILES ──────
SRC := $(shell find . -type f -name "*.c")

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
	@$(RM) $(OBJ)
	@echo "🚀 Ejecutando test de ejemplo:"
	@bash -c './$(NAME) $$(seq 1 100 | shuf)'
