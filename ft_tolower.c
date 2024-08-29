#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        c += 32;
        return (c);
    }
    return (c);

}

int main(void)
{
    char c = 'A';

    printf("using toupper: %d\n", tolower(c));
    printf("using ft_toupper: %d\n", ft_tolower(c));
}