#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*temp;

	temp = (const unsigned char *)s;
	while (n--)
	{
		if (*temp == (unsigned char)c)
			return ((void *)temp);
		temp++;
	}
	return (0);
}

/*
int main()
{
	char *str = "Hello World";
    printf("using memchr: %s\n", (char *)memchr(str, 'o', 11));
    printf("using ft_memchr: %s\n", (char *)ft_memchr(str, 'o', 11));
    return (0);
}*/
