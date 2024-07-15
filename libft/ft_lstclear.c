/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:45:21 by adshafee          #+#    #+#             */
/*   Updated: 2023/11/28 10:10:06 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*store;

	if (!lst || !*lst || !del)
		return ;
	while ((*lst))
	{
		store = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = store;
	}
}
