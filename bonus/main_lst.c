/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:01:06 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/08 15:54:27 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// Function to print integer content of a list node
void print_content(void *content)
{
    printf("%d -> ", *(int *)content);
}

// Function to delete integer content of a list node
void del_content(void *content)
{
    free(content);
}

// Function to create a new integer and allocate memory
void *double_content(void *content)
{
    int *new_int = malloc(sizeof(int));
    if (new_int)
        *new_int = (*(int *)content) * 2;
    return new_int;
}

int main(void)
{
    t_list *head = NULL;
    t_list *new_node;
    int *value;
    
    // Testing ft_lstnew and ft_lstadd_back
    for (int i = 1; i <= 5; i++)
    {
        value = malloc(sizeof(int));
        *value = i;
        new_node = ft_lstnew(value);
        ft_lstadd_back(&head, new_node);
    }
    
    printf("Original list:\n");
    ft_lstiter(head, print_content);
    printf("NULL\n");

    // Testing ft_lstsize
    printf("List size: %d\n", ft_lstsize(head));

    // Testing ft_lstadd_front
    value = malloc(sizeof(int));
    *value = 0;
    ft_lstadd_front(&head, ft_lstnew(value));
    printf("After adding 0 at the front:\n");
    ft_lstiter(head, print_content);
    printf("NULL\n");

    // Testing ft_lstlast
    t_list *last = ft_lstlast(head);
    printf("Last element: %d\n", *(int *)(last->content));

    // Testing ft_lstmap
    t_list *mapped_list = ft_lstmap(head, double_content, del_content);
    printf("Mapped list:\n");
    ft_lstiter(mapped_list, print_content);
    printf("NULL\n");

   /* // Testing ft_lstdelone
    printf("Deleting the element (2):\n");
    t_list *temp = head->next->next; //xoa 2
    head->next->next = head->next->next->next;
    ft_lstdelone(temp, del_content);
    ft_lstiter(head, print_content);
    printf("NULL\n");
    */
    // Testing ft_lstclear
    printf("Clearing the mapped list:\n");
    ft_lstclear(&mapped_list, del_content);
    printf("Mapped list cleared.\n");

    // Final cleanup of the original list
    ft_lstclear(&head, del_content);
    printf("Original list cleared.\n");

    return 0;
}
