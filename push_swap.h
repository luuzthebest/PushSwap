/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvvz <lvvz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 10:18:35 by hounajar          #+#    #+#             */
/*   Updated: 2025/04/01 17:01:36 by lvvz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"



int parse(char **str, t_stack **head, t_stack *node);
void ft_error();

void free_splitted(char **splitted);
void free_stack(t_stack **head);

int is_sorted(t_stack *head);

void swap(t_stack **head);
void sa(t_stack **a, int trace);
void sb(t_stack **b, int trace);
void ss(t_stack **a, t_stack **b, int trace);
void push(t_stack **a, t_stack **b);
void pa(t_stack **a, t_stack **b, int trace);
void pb(t_stack **a, t_stack **b, int trace);
void r_rotate(t_stack **a);
void rrb(t_stack **b, int trace);
void rra(t_stack **a, int trace);
void rotate(t_stack **a);
void rr(t_stack **a, t_stack **b, int trace);
void rb(t_stack **b, int trace);
void ra(t_stack **a, int trace);
void rrr(t_stack **a, t_stack **b, int trace);


void sort_two(t_stack **a);
void sort_three(t_stack **a);
void sort_small(t_stack **a, t_stack **b, int size);
void sort_big(t_stack **a, t_stack **b, int size);

# define BUFFER_SIZE 1