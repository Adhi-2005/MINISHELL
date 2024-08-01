

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	length;

	length = 0;
	if (!c)
		return (0);
	while (c[length])
		length++;
	return (length);
}

int	len_2dimensional(void **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}
