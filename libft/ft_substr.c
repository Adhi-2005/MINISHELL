

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub;
	size_t		lens;

	if (!s)
		return (NULL);
	lens = ft_strlen(s);
	if (start >= lens)
		return (ft_strdup(""));
	if (len > (lens - start))
		len = lens - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	ft_memcpy(sub, &s[start], len);
	sub[len] = '\0';
	return (sub);
}
