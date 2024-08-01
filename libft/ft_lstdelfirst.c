

#include "libft.h"

void	ft_lstdelfirst(t_list **list, void (*del)(void *))
{
	t_list	*node;

	node = (*list)->next;
	if (del)
		del((*list)->content);
	free(*list);
	*list = node;
}
