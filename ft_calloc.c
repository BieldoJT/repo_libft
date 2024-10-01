#include "libft.h"


void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;
	size_t	total_size;

	if ((nelem == 0) || (elsize == 0))
	{
		ptr = ft_calloc(1,1);
		return (ptr);
	}
	total_size = nelem * elsize;
	if ((total_size/nelem) != elsize)
		return (NULL);
	ptr = (char *)malloc(total_size);
	if(ptr != NULL)
		ft_bzero(ptr, total_size);

	return ((void *)ptr);
}


/*
void    *ft_calloc(size_t nmemb, size_t size)
{
    size_t    allsize;
    void    *ptr;

    allsize = nmemb * size;
    ptr = (char *)malloc(allsize);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, nmemb);
    return ((void *)ptr);
}*/

/*
int main()
{
	char *ptr = ft_calloc(1,2);
    if (ptr == NULL)
        printf("calloc failed\n");
    else
        printf("calloc success\n");
    free(ptr);
    return (0);
}*/

