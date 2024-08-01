

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *ne)
{
	t_list	*last;

	if (ne == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = ne;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = ne;
}
