#include "libft.h"
int ft_isprint(int c)
{
    if(c >= 32 && c <= 126)
        return (1);
    else
        return (0);
}


#include <stdio.h>
#include <ctype.h>
int main(void)
{
    printf("testing with isprint(): %d\n",ft_isprint('a'));
    printf("testing with isprint(): %d\n",ft_isprint('\n'));
    printf("testing with isprint(): %d\n",ft_isprint('\t'));
    printf("testing with isprint(): %d\n",ft_isprint('6'));
}