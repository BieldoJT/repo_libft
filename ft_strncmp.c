#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
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
	char *str2 = "AB";

	printf("%i\n", strncmp(str1, str2,1));
	printf("%i\n", ft_strncmp(str1, str2,1));
}*/