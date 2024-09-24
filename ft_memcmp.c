#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *p1;
	const unsigned char *p2;

	p1 = (const unsigned char*)s1;
	p2 = (const unsigned char*)s2;

	while (n--)
	{
		if (*p1 != *p2)
			return *p1 - *p2;
		p1++;
		p2++;
	}
	return (0);
}

int main()
{
	char *str1 = "Hellu";
    char *str2 = "Hello";

    printf("using memcmp: %i\n", memcmp(str1, str2, 6));
    printf("using ft_memcmp: %i\n", ft_memcmp(str1, str2, 6));
    return (0);
}
