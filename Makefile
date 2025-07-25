NAME = push_swap

CC = cc
FLAGS = -Wall -Werror -Wextra -I.

SRC = push_swap.c util/ft_stack.c main.c libft/ft_atoi.c libft/ft_isdigit.c

OBJ = $(SRC:.c=.o)

INCLUDE = push_swap.h

RM = rm -f

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $@ $^

%.o: %.c $(INCLUDE)
	$(CC) $(FLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

