/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:43:01 by jaferna2          #+#    #+#             */
/*   Updated: 2024/09/25 16:47:27 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	word_count(char const *s, char c)
{
	size_t	i;
	size_t	wordnum;

	i = 0;
	wordnum = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			wordnum++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (wordnum);
}

static	void	fill_ar(char **ar, char const *s, char c, size_t wordnum)
{
	size_t	i;
	size_t	word_init;
	size_t	word_indx;

	i = 0;
	word_indx = 0;
	while (s[i] && word_indx < wordnum)
	{
		while (s[i] == c)
			i++;
		word_init = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > word_init)
		{
			ar[word_indx] = ft_substr(s, word_init, i - word_init);
			ar[word_indx][ft_strlen(ar[word_indx])] = '\0';
			word_indx++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**ar;

	if (!s)
		return (NULL);
	words = word_count(s, c);
	ar = malloc((words + 1) * sizeof(char *));
	if (!ar)
		return (NULL);
	fill_ar(ar, s, c, words);
	ar[words] = NULL;
	return (ar);
}
