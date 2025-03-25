/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvvz <lvvz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 07:45:48 by lvvz              #+#    #+#             */
/*   Updated: 2025/03/20 14:01:29 by lvvz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void free_stack(t_stack **head)
{
    t_stack *temp;
    while (*head)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

void free_splitted(char **splitted)
{
    int j = 0;
    while (splitted[j])
        free(splitted[j++]);
    free(splitted);
}
int is_sorted(t_stack *head)
{
    int i = 0;
    int size = ft_lstsize(head);
    while (head->next)
    {
        if (head->content < head->next->content)
            i++;
        head = head->next;
    }
    if (i == size-1)
        return (1);
    else
        return 0;
    
    return i;
    
}