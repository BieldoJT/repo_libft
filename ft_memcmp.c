#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *p1;
	unsigned char *p2;
	size_t	i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}


/*
int main()
{
	char *str1 = "Hellu";
    char *str2 = "Hello";

    printf("using memcmp: %i\n", memcmp(str1, str2, 6));
    printf("using ft_memcmp: %zu\n", ft_memcmp(str1, str2, 6));
    return (0);
}*/
