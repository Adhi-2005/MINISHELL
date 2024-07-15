#ifndef MINISHELL_H
#define MINISHELL_H

# include <stdio.h>
# include <readline/readline.h>
# include <readline/history.h>
# include "libft/libft.h"

//built_ins.c

void	cmd_echo(char *cmd);
void	cmd_cd(char *cmd);
void	cmd_pwd(void);

#endif