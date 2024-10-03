#include "libft.h"


//static function to test the function ft_strmapi
/*
static char sum_index_c(unsigned int i, char c)
{
	return (c + i);
}


*/
int main()
{
    char str[] = "Hello, world!";
    char *result;

    result = ft_memchr(str, 'w', strlen(str));
    if (result)
        printf("Found 'w' at position: %ld\n", result - str);
    else
        printf("'w' not found in the first %lu characters\n", strlen(str));

    result = ft_memchr(str, 'z', strlen(str));
    if (result)
        printf("Found 'z' at position: %ld\n", result - str);
    else
        printf("'z' not found in the first %lu characters\n", strlen(str));

    return 0;
}

