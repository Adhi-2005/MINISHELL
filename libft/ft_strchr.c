

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	while (*str != '\0')
	{
		if ((unsigned char)*str == (char)ch)
			return ((char *)str);
		str++;
	}
	if (*str == (char) ch)
		return ((char *)str);
	return (NULL);
}
