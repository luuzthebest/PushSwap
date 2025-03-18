/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvvz <lvvz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 07:45:48 by lvvz              #+#    #+#             */
/*   Updated: 2025/03/18 07:46:33 by lvvz             ###   ########.fr       */
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