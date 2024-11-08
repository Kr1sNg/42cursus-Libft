/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:22:32 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/08 17:14:53 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	LIBRARY: N/A
**	SYNOPSIS: create new list from the given linked list
**  
**	DESCRIPTION:
** 	Iterates the list ’lst’ and applies the function ’f’ on the content of
**  each node. Creates a new list resulting of the successive applications of
**  the function ’f’. The ’del’ function is used to delete the content of a 
**  node if needed.
**    
**	RETURN VALUE:
**  The new list.
**  Or NULL if the allocation fails.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newhead;
	t_list	*cur;
	void	*newcontent;

	if (!lst || !f)
		return (NULL);
	newhead = NULL;
	while (lst != NULL)
	{
		newcontent = f(lst->content);
		cur = ft_lstnew(newcontent);
		if (cur == NULL)
		{
			if (del != NULL)
			{
				del(newcontent);
				ft_lstclear(&newhead, del);
			}
			return (NULL);
		}
		ft_lstadd_back(&newhead, cur);
		lst = lst->next;
	}
	return (newhead);
}
