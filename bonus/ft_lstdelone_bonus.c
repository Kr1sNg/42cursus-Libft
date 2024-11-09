/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:22:36 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/08 15:30:24 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	LIBRARY: N/A
**	SYNOPSIS: remove one node from a linked list
**
**	DESCRIPTION:
** 	Takes as a parameter a node and frees the memory of the node’s content 
**  using the function ’del’ given as a parameter and free the node. The memory
**  of ’next’ must not be freed.
**
**	RETURN VALUE: N/A
*/

#include "libft.h"

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!lst)
        return ;
    if (del)
        del(lst->content);
    free(lst);
}
