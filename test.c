#include "libft.h"
#include <stdio.h>


//static function to test the function ft_strmapi
/*
static char sum_index_c(unsigned int i, char c)
{
	return (c + i);
}
*/



int main()
{
	char *s = " ee Hello, World!  e";
    char *set = "";
    char *result;

    result = ft_strtrim(s, set);
    printf("Original string: %s\n", s);
    printf("\nSet of characters to remove: %s\n", set);
    printf("\nResultant string: %s\n", result);
    free(result);
    return (0);
}
