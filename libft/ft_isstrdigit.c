

#include "libft.h"

int	ft_isstrdigit(char *str)
{
	if (*str && (*str == '+' || *str == '-'))
		str++;
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}
