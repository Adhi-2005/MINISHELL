/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:43:07 by adshafee          #+#    #+#             */
/*   Updated: 2023/11/27 17:00:05 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	last;

	last = 0;
	while (*s)
	{
		last++;
		s++;
	}
	while (last >= 0)
	{
		if ((char)c == *s)
			return ((char *)s);
		s--;
		last--;
	}
	return (0);
}
