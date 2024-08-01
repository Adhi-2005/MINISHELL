

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	i = ft_strlen(s);
	dest = malloc(sizeof(char) * i + 1);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s, i);
	dest[i] = '\0';
	return (dest);
}
