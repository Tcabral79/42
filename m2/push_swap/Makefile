NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(LIBFT_DIR)/includes -I.

SRC =	src/push_swap.c \
		src/utils.c \
		src/utils2.c \
		src/stack_ops.c \
		src/parser.c \
		src/sort.c \
		src/radix.c

OBJ = $(SRC:.c=.o)

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)

clean:
	$(RM) $(OBJ)
	make clean -C $(LIBFT_DIR)

fclean: clean
	$(RM) $(NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re

