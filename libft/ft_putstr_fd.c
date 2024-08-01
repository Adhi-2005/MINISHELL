

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int		x;

	x = 0;
	if (!s)
		return ;
	while (s[x])
		x++;
	write(fd, s, x);
}
