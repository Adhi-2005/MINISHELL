

#include "libft.h"

static int	ft_counum(int num)
{
	int	n;

	n = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= 10;
		n++;
	}
	return (n);
}

void	ft_putnegtive(int n, char *str)
{
	if (n < 0)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		num;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_counum(n);
	num = n;
	if (n < 0)
	{
		num *= -1;
		i += 1;
	}
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	str[0] = '0';
	while (num)
	{
		str[--i] = (num % 10) + 48;
		num /= 10;
	}
	ft_putnegtive(n, str);
	return (str);
}
