#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char	*result;

	index = ft_strlen(s);
	result = (char *)ft_calloc(index + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (index--)
		result[index] = f(index, s[index]);
	return (result);
}




