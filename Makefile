# NAME = minishell

# CC = cc

# CFLAGS = -Wall -Wextra -Werror
# LDFLAGS = -lreadline

# SRC = execute.c

# OBJ = $(SRC:.c=.o)

# all: $(NAME)

# $(NAME): $(OBJ)
# 	@$(CC) $(CFLAGS) $(LDFLAGS) $(OBJ) -o $@

# %.o: %.c
# 	$(CC) $(CFLAGS) -c $< -o $@

# clean:
# 	rm -f $(OBJ)

# fclean: clean
# 	rm -f $(NAME)

# re: fclean all

# .PHONY: all clean fclean re


NAME = minishell
CC = cc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS = -lreadline
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRC = execute.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	@$(CC) $(CFLAGS) $(LDFLAGS) $(OBJ) $(LIBFT) -o $@

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@$(MAKE) clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)
	@$(MAKE) fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
