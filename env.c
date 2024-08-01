

#include "minishell.h"

char	**update_envp(t_list *list)
{
	char	**arr;
	int		i;
	int		len;
	t_list	*node;

	node = list;
	len = 0;
	while (node)
	{
		if (ft_strchr((char *)node->content, '='))
			len++;
		node = node->next;
	}
	arr = (char **)malloc(sizeof(char *) * (len + 1));
	i = 0;
	while (list)
	{
		if (ft_strchr((char *)list->content, '='))
			arr[i++] = ft_strdup((char *)list->content);
		list = list->next;
	}
	arr[i] = NULL;
	return (arr);
}

char	*get_var(char *varname, int len, t_list *g_env, t_list *l_var)
{
	if (ft_strncmp(varname, "?", 1) == 0)
		return (ft_itoa(get_mini()->status));
	while (g_env)
	{
		if (ft_strncmp(g_env->content, varname, len) == 0
			&& ((char *)g_env->content)[len] == '=')
			return (&((char *)g_env->content)[len + 1]);
		g_env = g_env->next;
	}
	while (l_var)
	{
		if (ft_strncmp(l_var->content, varname, len) == 0
			&& ((char *)l_var->content)[len] == '=')
			return (&((char *)l_var->content)[len + 1]);
		l_var = l_var->next;
	}
	return (NULL);
}

void	unset_var2(char **cmd, int i, int len, t_list **env)
{
	t_list	*node;
	t_list	*prev;

	node = *env;
	while (node)
	{
		if (ft_strncmp(node->content, cmd[i], len) == 0
			&& (((char *)node->content)[len] == '='
			|| !((char *)node->content)[len]))
		{
			if (node == *env)
				*env = (*env)->next;
			else
				prev->next = node->next;
			free(node->content);
			free(node);
			break ;
		}
		prev = node;
		node = node->next;
	}
}

static int	is_valid_identifier(char *str)
{
	int	j;

	j = 0;
	while (str[j] && (ft_isalpha(str[j]) || str[j] == '_' || (j
				&& ft_isdigit(str[j]))))
	{
		j++;
	}
	return (j != 0);
}

void	unset_var(char **cmd, t_list **g_env, t_list **l_var)
{
	int		i;
	t_mini	*m;
	int		len;

	i = 0;
	m = get_mini();
	while (cmd[i])
	{
		len = ft_strlen(cmd[i]);
		if (!is_valid_identifier(cmd[i]) || ft_strchr(cmd[i], '='))
		{
			ft_putstr_fd("minishell: unset: `", 2);
			ft_putstr_fd(cmd[i], 2);
			ft_putstr_fd("': not a valid identifier\n", 2);
			m->status = 1;
			i++;
			continue ;
		}
		unset_var2(cmd, i, len, g_env);
		unset_var2(cmd, i, len, l_var);
		i++;
	}
}
