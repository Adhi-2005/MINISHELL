

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;
	t_list	*temp;

	if (!lst || !del)
		return ;
	temp = *lst;
	p = 0;
	while (temp != NULL)
	{
		p = temp->next;
		ft_lstdelone(temp, del);
		temp = p;
	}
	*lst = NULL;
}
