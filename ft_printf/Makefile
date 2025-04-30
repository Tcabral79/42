NAME = libftprintf.a

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

SRC = ft_print_char.c\
	  ft_print_int.c\
	  ft_print_hex.c\
	  ft_print_ptr.c\
	  ft_print_str.c\
	  ft_print_unsigned.c\
	  ft_printf.c\
	  ft_itoa.c

OBJ = $(SRC:.c=.o)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

all: $(LIBFT) $(NAME)

ft_printf: $(LIBFT) $(OBJ)
	@$(CC) $(OBJ) -o $@ -L$(LIBFT_DIR) -lft
	@echo "✅ Executable 'printf' created!"
$(NAME): $(OBJ) 
	@$(AR) $(NAME) $(OBJ)
	@echo "✅ Biblioteca $(NAME) criada com sucesso!"

%.o: %.c
	@$(CC) $(CFLAGS)  -c $< -o $@
	@echo "🔧 Compilado: $<"

clean:
	@$(RM) $(OBJ)
	@echo "🧹 Arquivos .o removidos!"

fclean: clean
	@$(RM) $(NAME)
	@echo "🗑️ Biblioteca $(NAME) removida!"

re: fclean all

.PHONY: all clean fclean re