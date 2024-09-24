#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *temp;
	size_t i;


    temp = (const unsigned char *)s;
    while (n--)
    {
        if (*temp == (unsigned char)c)
            return (void *)temp;
        temp++;
    }
    return (0);
}

int main()
{
	char *str = "Hello World";
    printf("using memchr: %c\n", memchr(str, 'o', 11));
    printf("using ft_memchr: %c\n", ft_memchr(str, 'o', 11));
    return (0);
}
