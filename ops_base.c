/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_base.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvvz <lvvz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:27:07 by lvvz              #+#    #+#             */
/*   Updated: 2025/04/01 17:02:02 by lvvz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(t_stack **head)
{
    t_stack *temp;
    
    if (ft_lstsize(*head) > 1)
    {
        temp = (*head)->next;
        (*head)->next = temp->next;
        temp->next = *head; 
        *head = temp;
    }
    return ;
}
void push(t_stack **a, t_stack **b)
{
    t_stack *temp_b;

    if (!b || !*b)
        return ;
    temp_b = *b;
    *b = (*b)->next;   
    temp_b->next = *a; 
    *a = temp_b;       

    return ;
}
void rotate(t_stack **a)
{
    t_stack *last;
    if (!*a || !a || !(*a)->next)
        return ;
    last = ft_lstlast(*a);
    last->next = (*a);
    (*a) = (*a)->next;
    last->next->next = NULL;
}

void r_rotate(t_stack **a)
{
    t_stack *last;
    t_stack *second_to_last;

    second_to_last = (*a);
    if (!*a || !a || !(*a)->next)
        return;
    while (second_to_last->next->next)
        second_to_last = second_to_last->next;

    last = ft_lstlast(*a);
    last->next = (*a);
    (*a) = last;
    second_to_last->next = NULL;
}
void rrr(t_stack **a, t_stack **b, int trace)
{
    r_rotate(a);
    r_rotate(b);
    if (trace == 1)
        ft_putstr_fd("rrr\n", 1);
}