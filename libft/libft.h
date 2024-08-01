

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# if __linux__
#  include <stdint.h>
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isstrdigit(char *str);
size_t				ft_strlen(const char *str);
void				*ft_memcpy(void *dst, const void *src, size_t n);
char				*ft_strchr(const char *s, int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(char const *str, int *status);
char				*ft_strdup(const char *src);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmerge(char *s1, char *s2);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstindex(t_list *lst, int index);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *ne);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdelfirst(t_list **list, void (*del)(void *));
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcat(char *dest, char const *src);
char				*ft_strcpy(char *dest, char const *src);
void				free_array(void **arr);
char				*get_next_line(int fd);
int					len_2dimensional(void **arr);

#endif
