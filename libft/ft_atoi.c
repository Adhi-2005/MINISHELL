

#include "libft.h"

static int	overflowcheck(long long val, int sign, char c)
{
	if (sign == 1)
	{
		if (val > __LONG_MAX__ / 10 || (val == __LONG_MAX__ / 10 && c
				- '0' > __LONG_MAX__ % 10))
			return (-1);
	}
	else
	{
		if (-val < -(__LONG_MAX__ - 1) / 10 || (-val == -(__LONG_MAX__ - 1) / 10
				&& c - '0' > __LONG_MAX__ % 10 + 1))
			return (0);
	}
	return (1);
}

int	ft_atoi(char const *str, int *status)
{
	long long	val;
	int			sign;
	int			i;

	val = 0;
	sign = 1;
	i = 0;
	if (status)
		*status = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if ((str[i] == '-' || str[i] == '+') && (str[i++] == '-'))
		sign *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (overflowcheck(val, sign, str[i]) != 1)
		{
			if (status)
				*status = 0;
			return (overflowcheck(val, sign, str[i]));
		}
		val *= 10;
		val += str[i++] - '0';
	}
	return ((int)val * sign);
}
