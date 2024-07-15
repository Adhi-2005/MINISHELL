/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 19:00:46 by adshafee          #+#    #+#             */
/*   Updated: 2023/11/27 18:13:00 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_free_split(char **str, int j)
{
	int	i;

	i = j;
	while (i >= 0)
	{
		if (str[i] == NULL)
		{
			while (j >= 0)
			{
				if (str[j] != NULL)
					free(str[j]);
				j--;
			}
			free(str);
			return (NULL);
		}
		i--;
	}
	return (str);
}

size_t	word_count(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	len;
	char	**spl_str;

	if (!s)
		return (0);
	spl_str = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!spl_str)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				s++;
			spl_str[i++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	spl_str[i] = NULL;
	return (ft_free_split(spl_str, i - 1));
}
