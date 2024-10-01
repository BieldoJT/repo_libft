#include "libft.h"


//static function to test the function ft_strmapi
/*
static char sum_index_c(unsigned int i, char c)
{
	return (c + i);
}


*/
int main(void)
{
	char s[] = "tripouille";
	printf("%c aaa\n",'t' + 256);
    printf("using strchr: %s\n", strchr(s, 't' + 256));
    printf("using ft_strchr: %s\n", ft_strchr(s, 't' + 256));
}

