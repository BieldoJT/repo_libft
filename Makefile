# Nome do compilador
CC = cc

# Opções de compilação
CFLAGS = -Wall -Wextra -Werror -g

# Nome da biblioteca
NAME = libft.a

# Arquivos fontes da biblioteca
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isprint.c ft_memcpy.c ft_memcmp.c ft_memchr.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strtrim.c ft_itoa.c

#criar um objects igual ao do srcs para não utilizar wildcard

# Arquivos objeto da biblioteca
OBJS = $(SRCS:.c=.o)

# Regra padrão para compilar a biblioteca
all: $(NAME)

# Regra para criar a biblioteca estática
$(NAME): $(OBJS)
	ar rcs $@ $^

# Regra para compilar os arquivos objeto
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regra para limpar arquivos objeto
clean:
	rm -f $(OBJS)

# Regra para limpar arquivos objeto e a biblioteca
fclean: clean
	rm -f $(NAME)
	rm -f test.o
	rm -f ./test

# Regra para recompilar tudo
re: fclean all

# Regra para compilar e executar o teste
test: $(NAME) test.o
	$(CC) -o test test.o -L. -lft
	./test

# Regra para compilar o arquivo de teste
test.o: test.c
	$(CC) $(CFLAGS) -c test.c -o test.o

#.PHONY: all clean fclean re test
