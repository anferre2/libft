/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:17:45 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/21 14:38:09 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/* int main(void)
{
    t_list *list = NULL;
    t_list *elem1 = malloc(sizeof(t_list));
    t_list *elem2 = malloc(sizeof(t_list));
    t_list *elem3 = malloc(sizeof(t_list));

    elem1->content = "Element 1";
    elem2->content = "Element 2";
    elem3->content = "Element 3";

    ft_lstadd_front(&list, elem1);
    ft_lstadd_front(&list, elem2);
    ft_lstadd_front(&list, elem3);
	
    printf("Contents of the list:\n");
    t_list *current = list;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
    free(elem1);
    free(elem2);
    free(elem3);
    return 0;
} */