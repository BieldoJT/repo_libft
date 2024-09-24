#include "libft.h"

/*void    *ft_memset(void *src, int c, size_t n)
{
    size_t  i;
    unsigned char   *tmp_src;

    tmp_src = (unsigned char *) src;
    i = 0;
    while (i < n)
    {
        tmp_src[i] = (unsigned char) c;
        i++;
    }
    return (src);
}*/

void    *ft_memset(void *src, int c, size_t n)
{
    unsigned char   *tmp_src;

    tmp_src = (unsigned char *) src;
    while (n--)
        *tmp_src++ = c;
    return (src);
}

int main(void)
{
    char str1[15] = "hello world";
    char str2[15] = "hello world";

    printf("\n String before: %s\n", str1);
    memset(str1, 'B', 3);
    ft_memset(str2, 'B', 3);


    printf("\nUsing memset: %s\n", str1);
    printf("\nUsing ft_memset: %s\n", str2);
}
