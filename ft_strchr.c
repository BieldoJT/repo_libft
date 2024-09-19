#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;

    while(s[i])
    {
        if(s[i] == c)
            return ((char*)s + i);
        i++;
    }
    if (c == 0)
        return ((char*)s + i);
    return (0);
}
/*
int main(void)
{
    printf("using strchr: %s\n", strchr("I am optimus prime", '\0'));
    printf("using ft_strchr: %s\n", ft_strchr("I am optimus prime", '\0'));
}*/
