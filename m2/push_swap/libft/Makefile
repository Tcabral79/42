NAME = libft.a

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I includes

SRCDIR = srcs
INCDIR = includes

SRCS = $(SRCDIR)/ft_atoi.c \
       $(SRCDIR)/ft_strdup.c \
       $(SRCDIR)/ft_strjoin.c \
       $(SRCDIR)/ft_split.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "✅ Biblioteca $(NAME) criada com sucesso!"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "🔧 Compilado: $<"

clean:
	@$(RM) $(OBJS)
	@echo "🧹 Arquivos .o removidos!"

fclean: clean
	@$(RM) $(NAME)
	@echo "🗑️ Biblioteca $(NAME) removida!"

re: fclean all

.PHONY: all clean fclean re

