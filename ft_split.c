/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:25:03 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/07 16:25:05 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

static void	free_tab(char **tab, size_t count)
{
	while (count > 0)
		free(tab[--count]);
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	str_index;
	size_t	word_len;
	size_t	tab_index;

	str_index = 0;
	tab_index = 0;
	if (!s || !(tab = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1))))
		return (NULL);
	while (s[str_index])
	{
		while (s[str_index] == c && s[str_index])
			str_index++;
		word_len = 0;
		while (s[str_index + word_len] != c && s[str_index + word_len])
			word_len++;
		if (word_len > 0)
		{
			if (!(tab[tab_index++] = copy_word(s, str_index, word_len)))
				return (free_tab(tab, tab_index), NULL);
		}
		str_index += word_len;
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
