

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*sub;
	size_t		f;
	size_t		s;

	if (s1 != NULL && s2 != NULL)
	{
		f = ft_strlen(s1);
		s = ft_strlen(s2);
		sub = (char *)malloc(sizeof(char) * (f + s + 1));
		if (sub != NULL)
		{
			ft_memcpy(sub, s1, f);
			ft_memcpy(&sub[f], s2, s);
		}
		else
			return (NULL);
		sub[f + s] = '\0';
		return (sub);
	}
	return (NULL);
}
