/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   built_ins.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:40:13 by adshafee          #+#    #+#             */
/*   Updated: 2024/07/16 14:14:47 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	cmd_echo(char *cmd)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (cmd[i] && ft_strcmp(cmd[i], "-n"))
	{
		flag = 1;
		i++;
	}
	while (cmd[i])
	{
		printf("%s", cmd[i]);
		if (cmd[i + 1])
			printf(" ");
		i++;
	}
	if (flag == 1)
	{
		printf("\n");
	}
}

void	cmd_cd(char *cmd)
{
	if (cmd[1] == NULL)
	{
		printf("'cd <space> argument'");
		return ;
	}
	if (chdir(cmd[1]) != 0)
		perror("cd");
}

void	cmd_pwd(void)
{
	char *pwd = getcwd(NULL, 0);
	
	if (pwd)
	{
		printf("%s\n", pwd);
		free(pwd);
	}
	else
		perror("pwd");
}

void	cmd_export(t_list *env)
{
	while (env)
	{
		printf("%s\n", (char *)env->content);
		env = env->next;
	}
}