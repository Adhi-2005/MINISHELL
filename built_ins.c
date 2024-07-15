/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   built_ins.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:40:13 by adshafee          #+#    #+#             */
/*   Updated: 2024/07/15 15:05:39 by adshafee         ###   ########.fr       */
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