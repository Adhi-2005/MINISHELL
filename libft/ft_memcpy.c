

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*tos;
	unsigned char		*tod;
	size_t				c;

	c = 0;
	tod = (unsigned char *)dest;
	tos = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (c < n)
	{
		tod[c] = tos[c];
		c++;
	}
	return (dest);
}
