#include "libft.h"
size_t ft_strlcpy(char *dst, const char *src, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while(src[i] != '\0' && i < len)
    {
        dst[i] = src[i];
        i++;
    }
    while(i < len)
    {
        dst[i] = '\0'; //duvida, completa os vazios ou não?
        i++;
    }
    while(src[j] != '\0')
        j++;

    return (j);
}
/*
int main(void)
{
    const char *src = "Vasco da Gama";
    char dst[20];

    printf("using strlcpy: %li\n", strlcpy(dst,src,2));
    printf("using ft_strlcpy: %i\n", ft_strlcpy(dst,src,2));
    return (0);
}*/
