NAME = minishell

SRCS =	minishell.c split_qoute.c extra.c array_lst.c strip.c env.c env2.c env3.c pipe.c wildcard.c syntax.c \
		builtin.c signals.c split_shell.c split_shell2.c strip2.c alt_fds.c conditions.c input.c \
		pipex/childs.c pipex/here_doc.c pipex/pipex.c pipex/exit.c

CC = cc  -I/usr/local/opt/readline/include

CFLAGS =  -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

lib = libft/libft.a

%.o: %.c
	@$(CC) $(CFLAGS)  -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) 
	@make --no-print-directory -s -C libft
	@$(CC) $(OBJS) $(CFLAGS) $(lib) -I/usr/local/opt/readline/include -L/usr/local/opt/readline/lib -lreadline -o $(NAME)
	$(info Build Complete)

bonus: $(NAME)

clean:
	@rm -f $(OBJS)
	@make --no-print-directory -s clean -C libft 
	$(info Objects Removed)

fclean: clean
	@rm -f $(NAME)
	@make --no-print-directory -s fclean -C libft
	$(info Executable Removed)

re: fclean all
