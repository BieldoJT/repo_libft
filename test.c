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
	char *ptr = ft_calloc(__SIZE_MAX__,2);
    if (ptr == NULL)
        printf("calloc failed\n");
    else
        printf("calloc success\n");
    free(ptr);
    return (0);
}
