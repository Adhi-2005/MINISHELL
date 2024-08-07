

#ifndef PIPEX_H
# define PIPEX_H

# include "../libft/libft.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/uio.h>
# include <sys/wait.h>
# include <unistd.h>

# define DEL_WARN "minishell: warning: here-document delimited by end-of-file\n"

typedef struct s_mini
{
	t_list	*doc_str;
	int		here_doc;
	int		in;
	int		is_child;
	int		start;
	t_list	*pid;
	int		out[2];
	char	*cmd;
	char	**paths;
	char	**args;
	int		status;
	char	**cmds;
	char	*line;
	char	**envp;
	t_list	*g_env;
	t_list	*l_var;
	t_list	*buffer;
	sig_t	slash_dfl;
	sig_t	ctrlc_dfl;
	int		i;
	int		brace;
	int		quote;
	t_list	*split;
	t_list	*sub_split;
	t_list	*s_start;

}			t_mini;

void		mini_init(t_mini *m);

void		child(t_mini m, char *argv[], char *envp[]);
void		here_doc(t_mini *m, char *lim);

void		child_free(t_mini *m);

void		error_exit(char *err);
void		cmdnotfound(char *cmd);
void		filenotfound(char *file, int dir);
void		writeline(char *str);

void		check_pipe(t_mini *m);
void		exit_command(t_mini *m);

#endif
