#include "libft.h"

int ft_strlen(const char *s)
{
    int  i;

    i = 0;
    while(s[i] != '\0')
        i++;
    return (i);
}
/*
int main(void)
{
    char *s = "";

    printf("using strlen %lld\n", strlen(s));
    printf("using ft_strlen %d\n", ft_strlen(s));
}*/