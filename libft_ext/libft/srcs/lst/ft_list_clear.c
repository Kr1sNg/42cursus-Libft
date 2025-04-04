/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:03:53 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/09 19:47:16 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  LIBRARY: N/A
**  SYNOPSIS: remove and free all the linked list with data non-allocated
**  
**  DESCRIPTION:
**  Deletes and frees the given node and every successor of that node.
**  Finally, the pointer to the list must be set to NULL.
**    
**  RETURN VALUE: N/A
*/

#include "../../includes/libft.h"

void	ft_list_clear(t_list *begin_list)
{
	t_list	*temp;

	while (begin_list != NULL)
	{
		temp = begin_list;
		begin_list = begin_list->next;
		free(temp);
	}
}

/*
// Custom free function for data (strings in this case, we will strdup data)
void free_string(void *data)
{
    free(data);
}

void ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *new_elem = ft_create_elem(data);
    if (new_elem != NULL)
    {
        new_elem->next = *begin_list;
        *begin_list = new_elem;
    }
}

#include <stdio.h>
#include <string.h>
int main()
{
    t_list *list = NULL;

    // Allocate (with malloc inside strdup to use free_string after)
	// and copy some strings to the list
    ft_list_push_front(&list, strdup("Hello"));
    ft_list_push_front(&list, strdup("World"));
    ft_list_push_front(&list, strdup("42"));

    // Clear the list, freeing both the list nodes and the strings
    ft_list_clear(list, free_string);

    return 0;
}
*/
