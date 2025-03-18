/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvvz <lvvz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 10:18:35 by hounajar          #+#    #+#             */
/*   Updated: 2025/03/18 07:49:24 by lvvz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
// typedef struct stacks
// {
//     int num;
//     char *next;
//     char *previous;
// } stack;

void free_splitted(char **splitted);
void free_stack(t_stack **head);