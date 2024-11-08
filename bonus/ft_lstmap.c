/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:22:32 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/08 14:25:57 by tat-nguy         ###   ########.fr       */
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

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *newhead;
    t_list  *cur;
    t_list  *newnode;
    
    if (!lst || !f)
        return (NULL);
    newhead = ft_lstnew(lst->content);
    if (!newhead)
        return (NULL);
    cur = newhead;
    lst = lst->next;
    while (lst != NULL)
    {
        newnode = ft_lstnew(f(lst->content));
        if (!newnode)
        {
            ft_lstclear(&newhead, del);
            return (NULL);
        }
        cur->next = newnode;
        cur = cur->next;
        lst = lst->next;
    }
    return (newhead);
}