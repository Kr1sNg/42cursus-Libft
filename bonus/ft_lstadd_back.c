/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:18:25 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/08 12:00:47 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	LIBRARY: N/A
**	SYNOPSIS: add the node to the end of the linked list
**
**	RETURN VALUE: N/A
*/

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *tmp;

    if (!new)
        return ;
    if (*lst == NULL)
        *lst = new;
    else
    {
        tmp = ft_lstlast(*lst);
        tmp->next = new;
    }
}


