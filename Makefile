
CC = cc


CFLAGS = -Wall -Wextra -Werror


NAME = libft.a


SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isprint.c ft_memcpy.c ft_memcmp.c ft_memchr.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strtrim.c ft_itoa.c ft_strmapi.c  ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_isdigit.c ft_strjoin.c ft_putnbr_fd.c ft_split.c


OBJS = $(SRCS:.c=.o)


BONUS = ft_lstnew.c ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstsize.c


BONUS_OBJS = $(BONUS:.c=.o)


all: $(NAME)

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	ar rcs $@ $(OBJS)

bonus: $(BONUS_OBJS) $(NAME)
	ar rcs $(NAME) $(BONUS_OBJS)

clean:
	rm -f $(OBJS)
	rm -f $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all


.PHONY: all clean fclean re
