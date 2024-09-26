#include "libft.h"

static size_t	count_str(char const *s1, char const *set)
{
	size_t	rep;
	size_t	len;
	size_t	count;

	count = 0;
	rep = 0;
	while (s1[count] != '\0')
	{
		len = 0;
		while (set[len] != '\0')
		{
			if (s1[count] == set[len])
			{
				rep++;
				break ;
			}
			len++;
		}
		count++;
	}
	return (count - rep);
}

static size_t	verify(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	total_size;

	total_size = count_str(s1, set);
	str = (char *)malloc(sizeof(char) * total_size + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (verify(s1[i], set))
		{
			str[j] = s1[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

/*
int main()
{
	char *str = "Hello, World!";
    char *set = "eeeoo!";
    char *result;

    result = ft_strtrim(str, set);
	printf("Original string: %s\n", str);
	printf("\nSet of characters to remove: %s\n", set);
    printf("\nResultant string: %s\n", result);
    free(result);
    return (0);
}*/
