#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        c -= 32;
        return (c);
    }
    return (c);

}

/*
int main(void)
{
    char c = '0';

    printf("using toupper: %d\n", toupper(c));
    printf("using ft_toupper: %d\n", ft_toupper(c));
}*/
