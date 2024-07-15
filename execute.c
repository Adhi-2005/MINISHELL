/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:18:48 by adshafee          #+#    #+#             */
/*   Updated: 2024/07/15 13:06:52 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <readline/readline.h>
# include <readline/history.h>

int main(void)
{
	char *shell;

	while(1)
	{
		shell = readline("MINISHELL $ ");
		add_history(shell);
		rl_on_new_line();
	}
	return (0);
}