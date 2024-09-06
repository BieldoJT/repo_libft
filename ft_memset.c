#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char *tmp_s;

    i = 0;
    tmp_s = (unsigned char *) s;
    while (i < n)
    {
        tmp_s[i] = (unsigned char) c;
        i++;
    }
    return s;
}
/*
int main(void)
{
    char buffer[50];
    char *string;
    string = (char *) ft_memset(buffer,'A', 10);
    
    printf("\nBuffer contents: %s\n", string);

    ft_memset(buffer+10, 'B', 10);
    printf("\nBuffer contents: %s\n", buffer);
}*/