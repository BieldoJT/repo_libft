#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char *tmp_s;
    unsigned char null;

    i = 0;
    null = 0;
    tmp_s = (unsigned char *) s;
    while (i < n)
    {
        tmp_s[i] = null;
        i++;
    }
}
/*
int main(void)
{
    char s[20] = "isso e um teste";
    char t[20] = "isso e um teste";

    bzero(s,2);
    ft_bzero(t,2);
    
    printf("Buffer contents: %s\n",s);
    printf("Buffer contents: %s\n",t);

}*/