#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
    const unsigned char	*s;
    size_t	i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
    i = 0;

    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}


int main() {
    char str_a[100] = "Learningisfun";
    char str_b[100] = "Learningisfun";
    char *str1, *str2 ;
    str1 = str_a;
    str2 = str_b;
    printf("Original string :%s\n ", str_a);

    memcpy(str1 + 8, str1, 10);
    ft_memcpy(str2 + 8, str2, 10);
    printf("memcpy overlap : %s\n ", str_a);
    printf("ft_memcpy overlap : %s\n ", str_b);
}
