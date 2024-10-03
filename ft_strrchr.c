#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);
    while (i >= 0)
    {
        if((unsigned char)s[i] == (unsigned char)c)
            return ((char*)s + i);
        i--;
    }
    return (NULL);
}

/*
int main(void)
{
    printf("using strrchr: %s\n", strrchr("I am optimus prime", 'm'));
    printf("using ft_strrchr: %s\n", ft_strrchr("I am optimus prime", 'm'));

}*/
