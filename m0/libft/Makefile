NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
ft_isascii.c\
ft_isdigit.c\
ft_isprint.c\
ft_memchr.c\
ft_memcmp.c\
ft_memcpy.c\
ft_memmove.c\
ft_memset.c\
ft_strchr.c\
ft_strdup.c\
ft_strlcat.c\
ft_strlcpy.c\
ft_strlen.c\
ft_strncmp.c\
ft_strnstr.c\
ft_strrchr.c\
ft_tolower.c\
ft_toupper.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_itoa.c\
ft_putnbr_fd.c\
ft_putendl_fd.c\
ft_strjoin.c\
ft_striteri.c\
ft_substr.c\
ft_strtrim.c\
ft_strmapi.c\
ft_split.c\

SRC_BONUS = ft_lstnew.c\
ft_lstadd_front.c\
ft_lstsize.c\
ft_lstlast.c\
ft_lstadd_back.c\
ft_lstiter.c\
ft_lstmap.c\
ft_lstclear.c\
ft_lstdelone.c

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) 
	@$(AR) $(NAME) $(OBJ)
	@echo "✅ Biblioteca $(NAME) criada com sucesso!"
bonus: .bonus
.bonus: $(OBJ_BONUS) $(OBJ)
	@$(AR) $(NAME) $(OBJ) $(OBJ_BONUS) 
	@echo "✅ Biblioteca $(NAME) criada com sucesso!"
	@touch .bonus

%.o: %.c
	@$(CC) $(CFLAGS)  -c $< -o $@
	@echo "🔧 Compilado: $<"

clean:
	@$(RM) $(OBJ) $(OBJ_BONUS) .bonus
	@echo "🧹 Arquivos .o removidos!"

fclean: clean
	@$(RM) $(NAME)
	@echo "🗑️ Biblioteca $(NAME) removida!"

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

.PHONY: all clean fclean re
