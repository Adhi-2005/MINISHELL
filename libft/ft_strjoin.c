/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:25:13 by adshafee          #+#    #+#             */
/*   Updated: 2023/11/27 16:29:37 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*n_str;

	if (!s1 || !s2)
		return (0);
	n_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!n_str)
		return (0);
	i = 0;
	while (s1[i])
	{
		n_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		n_str[i] = s2[j];
		j++;
		i++;
	}
	n_str[i] = '\0';
	return (n_str);
}
