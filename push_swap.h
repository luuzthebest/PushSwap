/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvvz <lvvz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 10:18:35 by hounajar          #+#    #+#             */
/*   Updated: 2025/03/25 11:24:11 by lvvz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"



void free_splitted(char **splitted);
void free_stack(t_stack **head);
int is_sorted(t_stack *head);
void swap(t_stack **head);
void sa(t_stack **a);
void sb(t_stack **b);
void ss(t_stack **a, t_stack **b);
void pa(t_stack **a, t_stack **b);
void pb(t_stack **a, t_stack **b);
void rotate(t_stack **a);
void r_rotate(t_stack **a);
void rrb(t_stack **b);
void rra(t_stack **a);
void rr(t_stack **a, t_stack **b);
void rb(t_stack **b);
void ra(t_stack **a);
void push(t_stack **a, t_stack **b);