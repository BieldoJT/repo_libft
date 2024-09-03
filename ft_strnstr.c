#include "libft.h"
char *ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if(to_find[i] == '\0')
	    return (str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (to_find[j] == str[i + j] && i + j < len)
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

/*
int main()
{
    char *str = "aeiou";
    char *find = "o";

    printf(" testing with strnstr: %s\n", strnstr(str,find,2));
    printf(" testing with ft_strnstr: %s\n", ft_strnstr(str,find,2));

    return 0;
}*/