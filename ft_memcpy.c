#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;
	size_t	i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;

	if (!d || !s)
		return NULL; // duvida, não sei se verifica se é null

	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
int main()
{
	char greeting1[5];
	char greeting2[5];

	memcpy(greeting1, "Hello, world!\n", 3);
	ft_memcpy(greeting2, "Hello, world!\n", 3);
	printf("%s\n",greeting1);
	printf("%s\n",greeting2);
}
*/
