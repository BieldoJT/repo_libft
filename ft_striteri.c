#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int index;

	if (!s || !f)
		return (NULL);
	index = 0;
	while (s[index] != '\0')
	{
		f(index,&s[index]);
		index++;
	}
}
