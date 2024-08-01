NAME	=	libft.a
SRCS	= 	ft_lstlast.c ft_lstadd_back.c ft_lstnew.c ft_strdup.c ft_memcpy.c ft_strlen.c \
			ft_strchr.c ft_putstr_fd.c ft_strncmp.c ft_isalpha.c ft_isdigit.c ft_substr.c \
			ft_strjoin.c ft_lstclear.c ft_lstadd_front.c ft_lstdelone.c ft_lstsize.c ft_strcat.c \
			ft_isstrdigit.c  ft_putchar_fd.c ft_strcpy.c ft_atoi.c ft_itoa.c ft_strcmp.c \
			ft_split.c ft_strmerge.c ft_lstindex.c ft_lstdelfirst.c	
OBJS	=	${SRCS:.c=.o}
LIBC	=	ar rcs
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -g3

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

clean:
	rm -f ${OBJS} ${BOBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all