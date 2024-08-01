

#include "libft.h"

char	*ft_strcat(char *dest, char const *src)
{
	int		x;
	int		i;

	x = 0;
	i = 0;
	while (dest[x] != '\0')
		x++;
	while (src[i] != '\0')
	{
		dest[x] = src[i];
		x++;
		i++;
	}
	dest[x] = '\0';
	return (dest);
}
