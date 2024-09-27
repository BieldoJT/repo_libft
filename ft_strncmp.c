#include "libft.h"

size_t	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t i;

	i = 0;
    if (n == 0)
	    return (i);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int	main()
{
	char *str1 = "ABC";
	char *str2 = "tBC";

	printf("using strncmp: %i\n", strncmp(str1, str2,0));
	printf("using ft_strncmp: %i\n", ft_strncmp(str1, str2,0));
}*/
