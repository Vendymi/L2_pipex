/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmichali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:45:37 by vmichali          #+#    #+#             */
/*   Updated: 2023/01/28 17:07:35 by vmichali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;

	new_lst = NULL;
	if (!f || !del || !lst)
		return (NULL);
	new_lst = ft_lstnew((f)(lst->content));
	new_elem = new_lst;
	while (lst->next != NULL)
	{
		lst = lst->next;
		new_elem->next = ft_lstnew((f)(lst->content));
		if (!new_elem)
			(del)(lst);
		new_elem = new_elem->next;
	}
	return (new_lst);
}
