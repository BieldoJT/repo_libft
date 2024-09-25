#include "libft.h"
/* if (a * b)/b != a , then */

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;

	if((nelem == 0) || (elsize == 0) || ((nelem * elsize)/elsize != nelem))
		ptr = NULL;
	else
	{
		ptr = (char *)malloc(nelem * elsize);
		if(ptr != NULL)
			ft_bzero(ptr, nelem * elsize);
	}
	return ((void *)ptr);
}

/*
int main()
{
	char *ptr = ft_calloc(LONG_MAX,2);
    if (ptr == NULL)
        printf("calloc failed\n");
    else
        printf("calloc success\n");
    free(ptr);
    return (0);
}*/

