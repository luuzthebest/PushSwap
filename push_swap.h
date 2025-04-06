/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvvz <lvvz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 10:18:35 by hounajar          #+#    #+#             */
/*   Updated: 2025/04/06 11:48:43 by lvvz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include "libft/libft.h"

int		parse(char **str, t_stack **head, t_stack *node);
void	fill_arr(t_stack *a, int *arr);
void	sort_arr(int *arr, int size);
void	ft_error(t_stack **a, t_stack **b);

void	free_splitted(char **splitted);
void	free_stack(t_stack **head);

int		is_sorted(t_stack *head);

void	swap(t_stack **head);
void	sa(t_stack **a, int trace);
void	sb(t_stack **b, int trace);
void	ss(t_stack **a, t_stack **b, int trace);
void	push(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b, int trace);
void	pb(t_stack **a, t_stack **b, int trace);
void	r_rotate(t_stack **a);
void	rrb(t_stack **b, int trace);
void	rra(t_stack **a, int trace);
void	rotate(t_stack **a);
void	rr(t_stack **a, t_stack **b, int trace);
void	rb(t_stack **b, int trace);
void	ra(t_stack **a, int trace);
void	rrr(t_stack **a, t_stack **b, int trace);

void	sort_two(t_stack **a);
void	sort_three(t_stack **a);
void	sort_small(t_stack **a, t_stack **b, int size);
void	sort_big(t_stack **a, t_stack **b, int size);

# define BUFFER_SIZE 1
#endif