/* if (a * b)/b != a , then */
#include "libft.h"


void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;
	size_t	total_size;

	if ((nelem == 0) || (elsize == 0))
		return (NULL);
	total_size = nelem * elsize;
	if ((total_size/nelem) != elsize)
		return (NULL);


	ptr = (char *)malloc(total_size);
	if(ptr != NULL)
		ft_bzero(ptr, total_size);

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

