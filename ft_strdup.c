#include "libft.h"

char	*strdup(const char *s)
{
	char    *ptr;
    size_t    len;

    len = ft_strlen(s);
    ptr = (char *)malloc((len + 1) * sizeof(char));
    if (ptr == NULL)
        return (NULL);
    ft_memcpy(ptr, s, len);
    return (ptr);
}

int main()
{
	char *s = "Hello World";
    char *copy = strdup(s);
    printf("string : %s\n", s);
    printf("copied string : %s\n", copy);
    free(copy);
    return (0);
}
