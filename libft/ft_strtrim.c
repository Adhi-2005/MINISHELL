/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:40:06 by adshafee          #+#    #+#             */
/*   Updated: 2023/11/22 15:34:45 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*s;
	char	*store_here;

	if (s1 == NULL || set == NULL)
		return (NULL);
	s = (char *)s1;
	i = 0;
	while (s[i] && ft_strchr(set, s[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_strchr(set, s[j - 1]))
		j--;
	store_here = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!store_here)
		return (NULL);
	ft_strlcpy(store_here, &s[i], j - i + 1);
	return (store_here);
}
