/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhil <adhil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:30:11 by adshafee          #+#    #+#             */
/*   Updated: 2023/12/12 23:29:35 by adhil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long	num;
	long			neg;

	num = 0;
	neg = 1;
	while (*str && (*str == ' ' || (*str >= '\t' && *str <= '\r')))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		num = ((num * 10) + (*str - '0'));
		if (num > LONG_MAX && neg == -1)
			return (0);
		else if (num >= LONG_MAX && neg == 1)
			return (-1);
		str++;
	}
	return ((int)(num * neg));
}
