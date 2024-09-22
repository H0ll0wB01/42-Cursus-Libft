
#include "libft.h"

size_t	word_count(char const *s, char c)
{
	size_t	i;
	size_t	wordnum;

	i = 0;
	while (s[i])
	{	
		if (s[i] == c)
			wordnum++;
		i++;
	}
	return (wordnum + 1);
}

char	**ft_split(char const *s, char c)
{
	size_t words;
	char **ar;

	if (!s)
		return (NULL);
	words = word_count(s, c);
	ar = malloc((words + 1) * sizeof(char *));
	if (!ar)
		return (NULL);
	ar[words] = NULL;
	
	return (ar);
}

