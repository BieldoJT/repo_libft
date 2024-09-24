#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*char_dest;
	const unsigned char	*char_src;
	size_t	i;

	char_dest = (unsigned char *)dest;
	char_src = ( const unsigned char *)src;
	i = 0;

	if(char_dest > char_src && char_dest > char_src + n) //comparação do ESPAÇO DE MEMORIAAAAAAA,
	{
		// usar um array auxiliar??
		i = n - 1;
		while(i <= 0)
		{
			char_dest[i] == char_src[i];
			i--;
		}
	}

}

int main(void)
{
	char str_a[100] = "abcdefg";
    //char str_b[100] = "Learningisfun";
    char *str1;
	//char *str2 ;
	printf("%s\n",str_a + 2);
    str1 = str_a;
    //str2 = str_b;
    printf("Original string :%s\n ", str_a);

    memmove(str1 , str1, 3);
    //t_memcpy(str2 + 8, str2, 10);
    printf("memmove overlap : %s\n ", str_a);
    //printf("ft_memcpy overlap : %s\n ", str_b);
}


