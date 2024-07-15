/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:31:38 by adshafee          #+#    #+#             */
/*   Updated: 2023/11/08 13:40:41 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr_str;
	size_t	i;

	ptr_str = (char *)b;
	i = 0;
	while (len > i)
	{
		ptr_str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
