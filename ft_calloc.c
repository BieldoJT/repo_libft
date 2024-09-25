#include "libft.h"
/* se (a * b)/b != a , então deu overflow*/

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;

	if((nelem == 0) || (elsize == 0) || (nelem * elsize/elsize != nelem))
		ptr = NULL;
	else
	{
		ptr = malloc(nelem * elsize);
		if(ptr != NULL)
			ft_bzero(ptr, nelem * elsize);
		else
			ptr = NULL;
	}
	return (ptr);
}

/*
int main()
{
	char *ptr = ft_calloc(10, sizeof(char));
    if (ptr == NULL)
        printf("calloc failed\n");
    else
        printf("calloc success\n");
    free(ptr);
    return (0);
}*/
