

#include "minishell.h"

char	*ft_lsttostr(t_list *arr)
{
	char	*str;
	int		len;
	t_list	*start;

	len = 0;
	start = arr;
	while (arr)
	{
		len += ft_strlen((char *)arr->content);
		arr = arr->next;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	str[len] = '\0';
	len = 0;
	while (start)
	{
		ft_strcpy(&str[len], (char *)start->content);
		len += ft_strlen((char *)start->content);
		start = start->next;
	}
	return (str);
}

char	*arrtostr(char **arr, int tofree)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (arr[i])
	{
		len += ft_strlen(arr[i]);
		i++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	str[len] = '\0';
	i = 0;
	len = 0;
	while (arr[i])
	{
		ft_strcpy(&str[len], arr[i]);
		len += ft_strlen(arr[i]);
		i++;
	}
	if (tofree)
		(free_array((void **)arr));
	return (str);
}

void	sort_lst(t_list *list)
{
	t_list	*tmp;
	t_list	*tmp2;
	char	*tmp3;

	tmp = list;
	while (tmp)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (ft_strcmp(tmp->content, tmp2->content) > 0)
			{
				tmp3 = tmp->content;
				tmp->content = tmp2->content;
				tmp2->content = tmp3;
			}
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
}

void	*init_zero(int *val1, int *val2, int *val3, int *val4)
{
	if (val1)
		*val1 = 0;
	if (val2)
		*val2 = 0;
	if (val3)
		*val3 = 0;
	if (val4)
		*val4 = 0;
	return (NULL);
}

void	free_array(void **arr)
{
	size_t	i;

	i = 0;
	if (arr)
	{
		while (arr[i])
			free(arr[i++]);
		free(arr);
	}
}
