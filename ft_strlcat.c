#include "libft.h"
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  dst_size;
    size_t  j;
    size_t src_size;

    i = 0;
    j = 0;
    src_size = 0;
    while (dst[i])
        i++;
    dst_size = i;
    while (src[src_size])
        src_size++;
    while (src[j] && i < (size - 1))
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (dst_size + src_size - 2);
}

/*
int main(void)
{
    char dst[20] =  "This";
    const char *src = " is a test";
	char dst2[20] =  "This";
    const char *src2 = " is a test";
	strlcat(dst,src,7);
	ft_strlcat(dst2,src2,7);
	printf("%s\n", dst);
	printf("%s\n", dst2);
    //printf("using strlcat: %li\n", strlcat(dst,src,7));
    //printf("using ft_strlcat: %i\n", ft_strlcat(dst,src,7));
}
*/
