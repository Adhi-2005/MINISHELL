

#include "libft.h"

t_list	*ft_lstindex(t_list *lst, int index)
{
	int	i;

	i = 0;
	while (lst && i < index)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
