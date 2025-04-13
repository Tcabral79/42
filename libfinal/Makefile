# Nome do programa (a biblioteca)
NAME = libft.a

# Compilador e flags
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

# Diretórios dos arquivos-fonte e headers
SRCDIR = srcs
INCDIR = includes

# Lista dos arquivos .c
/*SRCS = $(SRCDIR)/ft_putchar_fd.c \
       $(SRCDIR)/ft_atoi.c \
       $(SRCDIR)/ft_putstr_fd.c \
       $(SRCDIR)/ft_strlen.c \
       $(SRCDIR)/ft_strncmp.c\
       $(SRCDIR)/ft_isalnum.c\
       $(SRCDIR)/ft_isalpha.c\
       $(SRCDIR)/ft_isascii.c\
       $(SRCDIR)/ft_isdigit.c\
       $(SRCDIR)/ft_isprint.c\
       $(SRCDIR)/ft_strlcat.c\
       $(SRCDIR)/ft_strcpy.c\
       $(SRCDIR)/ft_strdup.c\
       $(SRCDIR)/ft_calloc.c\
       $(SRCDIR)/ft_memset.c\
       $(SRCDIR)/ft_bzero.c\
       $(SRCDIR)/ft_memchr.c\
       $(SRCDIR)/ft_strchr.c\
       $(SRCDIR)/ft_strrchr.c\
       $(SRCDIR)/ft_strnstr.c\
       $(SRCDIR)/ft_memcmp.c\
       $(SRCDIR)/ft_memcpy.c\
       $(SRCDIR)\ft_memmove.c\
       $(SRCDIR)\ft_strncmp.c\
       $(SRCDIR)\ft_tolower.c\
       $(SRCDIR)\ft_toupper.c\
       $(SRCDIR)\ft_memmove.c*/
       
SRCS = $(SRCDIR)/ft_atoi.c\
$(SRCDIR)/ft_bzero.c\
$(SRCDIR)/ft_calloc.c\
$(SRCDIR)/ft_isalnum.c\
$(SRCDIR)/ft_isalpha.c\
$(SRCDIR)/ft_isascii.c\
$(SRCDIR)/ft_isdigit.c\
$(SRCDIR)/ft_isprint.c\
$(SRCDIR)/ft_memchr.c\
$(SRCDIR)/ft_memcmp.c\
$(SRCDIR)/ft_memcpy.c\
$(SRCDIR)/ft_memmove.c\
$(SRCDIR)/ft_memset.c\
$(SRCDIR)/ft_strchr.c\
$(SRCDIR)/ft_strdup.c\
$(SRCDIR)/ft_strlcat.c\
$(SRCDIR)/ft_strlcpy.c\
$(SRCDIR)/ft_strlen.c\
$(SRCDIR)/ft_strncmp.c\
$(SRCDIR)/ft_strnstr.c\
$(SRCDIR)/ft_strrchr.c\
$(SRCDIR)/ft_tolower.c\
$(SRCDIR)/ft_toupper.c\
$(SRCDIR)/ft_putchar_fd.c\
$(SRCDIR)/ft_putstr_fd.c\
$(SRCDIR)/ft_itoa.c\
$(SRCDIR)/ft_putendl_fd.c\
$(SRCDIR)/ft_putnbr_fd.c


# Transforma os arquivos .c em .o (objetos)
OBJS = $(SRCS:.c=.o)

# Regra principal (equivalente a "make all")
all: $(NAME)

# Compila os arquivos .c e cria a biblioteca estática
$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "✅ Biblioteca $(NAME) criada com sucesso!"

# Compila os arquivos .o
%.o: %.c
	@$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@
	@echo "🔧 Compilado: $<"

# Remove os arquivos .o (objetos)
clean:
	@rm -f $(OBJS)
	@echo "🧹 Arquivos .o removidos!"

# Remove os arquivos .o e a biblioteca
fclean: clean
	@rm -f $(NAME)
	@echo "🗑️ Biblioteca $(NAME) removida!"

# Recompila tudo do zero
re: fclean all

# Não considera esses nomes como arquivos reais
.PHONY: all clean fclean re info

info:
	@echo "	fcorvaro's libft: make [info | all | bonus | clean | fclean | re]"
	@echo
	@echo "	libft build targets"
	@echo "		all: compile the library"
	@echo "		bonus: compile the library with bonus"
	@echo "		clean: remove object files"
	@echo "		fclean: remove object files and archive library"
	@echo "		info: displays informations"
	@echo "		re: fclean and all						"
