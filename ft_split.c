#include "libft.h"


static size_t	count_words(char const *s, char c)
{
	size_t	index;
	size_t	words;

	index = 0;
	words = 0;
	while (s[index] != '\0')
	{
		if (s[index] == c || s[index + 1] == '\0')
			words++;
		index++;
	}
	return (words);
}

static char	*copy_word(char const *s, size_t index, size_t len)
{
	char	*word;
	size_t	index_word;

	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	index_word = 0;
	while (index_word < len)
	{
		word[index_word] = s[index];
		index_word++;
		index++;
	}
	word[index_word] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	str_index;
	size_t	word_len;
	size_t	tab_index;

	str_index = 0;
	tab_index = 0;
	tab = (char **)malloc((sizeof(char *) * count_words(s, c)) + 8);
	if (!tab)
		return (NULL);
	while (str_index < ft_strlen(s))
	{
		word_len = 0;
		while (s[str_index] != c && s[str_index] != '\0')
		{
			word_len++;
			str_index++;
		}
		tab[tab_index] = copy_word(s, str_index - word_len, word_len);
		tab_index++;
		str_index++;
	}
	tab[tab_index] = NULL;
	return (tab);
}


/*
int main()
{
	char *str = "k,Hello,k";
    char **tab;

    tab = ft_split(str, ',');
    for (int i = 0; tab[i]!= NULL; i++)
        printf("%s\n", tab[i]);
    for (int i = 0; tab[i]!= NULL; i++)
        free(tab[i]);
    free(tab);
    return (0);
}*/
