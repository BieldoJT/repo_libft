#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest > src)
	{
		while (n--)
			d[n] = s[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/*
int main(void)
{
    char *str = "abcdef";

    char str_a[4] = "123";
    char str_b[4] = "123";

    printf("Original string :%s\n ", str);

    memmove(str_a , str, 3);
    ft_memmove(str_b, str, 3);
    printf("memmove string: %s\n ", str_a);
    printf("ft_memcpy string : %s\n ", str_b);
}*/


