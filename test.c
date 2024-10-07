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
    char *big = "aeiou";
    char *find = "o";

    //printf(" testing with strnstr: %s\n", strnstr(big,find,2));
    printf(" testing with ft_strnstr: %s\n", ft_strnstr(big,find,7));

    return 0;
}
