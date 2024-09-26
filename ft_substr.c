#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,size_t len)
{
	char	*dest;
	size_t    i;

	dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && i < len)
	{
        dest[i] = s[start];
        i++;
        start++;
    }
	dest[i] = '\0';
	return (dest);
}


/*
int main()
{
	char *s = "Hello, World!";
    char *sub = ft_substr(s, 6, 5);
    printf("substring : %s\n", sub);
    free(sub);
    return (0);
}*/
