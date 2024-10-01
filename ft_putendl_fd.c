#include "libft.h"


void ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/*
int main()
{
    char *str = "Hello, World!";
    ft_putendl_fd(str, 1);
    return (0);
}
*/
