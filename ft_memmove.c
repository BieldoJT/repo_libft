#include "libft.h"


void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;

    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    if (dest > src)
    {
        while (n--)
            d[n] = s[n];
        return (dest);
    }
    ft_memcpy(dest, src, n);
    return (dest);
}

/*
int main(void)
{
    char str[] = "abcdef";

    char str_a[12] = "123456789";
    char str_b[12] = "123456789";

    printf("Original string :%s\n", str);

    memmove(str_a , str, 5);
    ft_memmove(str_b, str, 5);

    printf("memmove   string : %s %p\n", str_a, &str_a);
    printf("ft_memcpy string : %s %p\n", str_b, &str_b);
}*/


