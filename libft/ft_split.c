

#include "libft.h"

static int	wordcount(char const *str, char c)
{
	int	i;
	int	wordcount;

	i = 0;
	wordcount = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && c != str[i])
			wordcount++;
		else if (c != str[i] && c == str[i - 1])
			wordcount++;
		i++;
	}
	return (wordcount);
}

static char	**split_word(char **split, char const *s, char c, int *word)
{
	char	*str;

	str = (char *)s;
	while (*str != '\0')
	{
		while (*str == c && *str != '\0')
			str++;
		if (ft_strchr(str, c))
		{
			split[(*word)++] = ft_substr(str, 0, (size_t)(ft_strchr(str, c)
						- str));
			if (!split[*word - 1])
			{
				free_array((void **)split);
				return (NULL);
			}
			str = ft_strchr(str, c);
		}
		else if (*str != '\0')
		{
			split[(*word)++] = ft_strdup(str);
			break ;
		}
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		word;

	if (!s)
		return (NULL);
	split = (char **)malloc(sizeof(char *) * (wordcount(s, c) + 1));
	if (!split)
		return (NULL);
	word = 0;
	if (!split_word(split, s, c, &word))
		return (NULL);
	split[word] = 0;
	return (split);
}
