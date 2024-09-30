#include "libft.h"




int main(void)
{
	int n = 0;
    char *str = ft_itoa(n);
    printf("Integer: %d\n", n);
    printf("String: %s\n", str);
    free(str);
    return (0);
}

