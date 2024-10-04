#include "libft.h"


//static function to test the function ft_strmapi
/*
static char sum_index_c(unsigned int i, char c)
{
	return (c + i);
}


*/

#include <bsd/string.h>
int main(void)
{
    //char dst[20] =  "This";

	char dst2[20] =  "This";
    const char src2[] = " is a test";
	//strlcat(dst,src,7);
	ft_strlcat(dst2,src2,3);

	printf("%s\n", dst2);
    //printf("using strlcat: %li\n", strlcat(dst,src,7));
    //printf("using ft_strlcat: %i\n", ft_strlcat(dst,src,7));
}

