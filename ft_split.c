#include "libft.h"


static size_t count_words(char const *s, char c)
{
	size_t    count;

    count = 0;
    while (s[count]!= '\0')
    {
        if (s[count] != c && (s[count + 1] == c || s[count + 1] == '\0'))
            count++;
        count++;
    }
    return (count);
}


char **ft_split(char const *s, char c)
{

	char	**tab;
	int	i;
	int	j;
	int	k;
	size_t    word_count;

	i = 0;
	j = 0;
	k = 0;
	word_count = count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * word_count);
	if (!tab)
		return (NULL);
	while (s[i]!= '\0')
	{

	}
}
