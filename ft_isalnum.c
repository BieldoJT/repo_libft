#include "libft.h"
int ft_isalnum(int c)
{
    if (c >= 65 && c <= 90)
        return (1);
    else if (c >= 97 && c <= 122)
        return (2);
    else if (c >= 48 && c <= 57)
        return (4);
    else
        return (0);
}


int main(void)
{
    char test = '&';

    printf("testing with isalnum %d\n", isalnum(test));
    printf("testing with isalnum %d\n", ft_isalnum(test));
}