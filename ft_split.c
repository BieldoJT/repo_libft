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

static void	ft_freeup(char **strs)
{
	int	i;

	i = 0;
	while (strs[i] != NULL)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}


static int	ft_wordcount(char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			word++;
			while (str[i] != c && str[i] != '\0')
				i++;
			if (str[i] == '\0')
				return (word);
		}
		i++;
	}
	return (word);
}

static void	ft_strcpy(char *word, char *str, char c, int j)
{
	int	i;

	i = 0;
	while (str[j] != '\0' && str[j] == c)
		j++;
	while (str[j + i] != c && str[j + i] != '\0')
	{
		word[i] = str[j + i];
		i++;
	}
	word[i] = '\0';
}

static char	*ft_stralloc(char *str, char c, int *pos)
{
	char	*word;
	int		j;

	j = *pos;
	word = NULL;
	while (str[*pos] != '\0')
	{
		if (str[*pos] != c)
		{
			while (str[*pos] != '\0' && str[*pos] != c)
				*pos += 1;
			word = (char *)malloc(sizeof(char) * (*pos + 1));
			if (word == NULL)
				return (NULL);
			break ;
		}
		*pos += 1;
	}
	ft_strcpy(word, str, c, j);
	return (word);
}

char	**ft_split(char const *str, char c)
{
	char	**strs;
	int		i;
	int		j;
	int		pos;

	if (str == NULL)
		return (NULL);
	i = 0;
	pos = 0;
	j = ft_wordcount((char *)str, c);
	strs = (char **)malloc(sizeof(char *) * (j + 1));
	if (strs == NULL)
		return (NULL);
	strs[j] = NULL;
	while (i < j)
	{
		strs[i] = ft_stralloc(((char *)str), c, &pos);
		if (strs[i] == NULL)
		{
			ft_freeup(strs);
			break ;
		}
		i++;
	}
	return (strs);
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
