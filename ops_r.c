/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_r.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvvz <lvvz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:53:27 by lvvz              #+#    #+#             */
/*   Updated: 2025/04/01 17:02:44 by lvvz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(t_stack **a, int trace)
{
    rotate(a);
    if (trace == 1)
        ft_putstr_fd("ra\n", 1);
}
void rb(t_stack **b, int trace)
{
    rotate(b);
    if (trace == 1)
        ft_putstr_fd("rb\n", 1);
}
void rr(t_stack **a, t_stack **b, int trace)
{
    rotate(a);
    rotate(b);
    if (trace == 1)
        ft_putstr_fd("rr\n", 1);
}
void rra(t_stack **a, int trace)
{
    r_rotate(a);
    if (trace == 1)
        ft_putstr_fd("rra\n", 1);
}
void rrb(t_stack **b, int trace)
{
    r_rotate(b);
    if (trace == 1)
        ft_putstr_fd("rrb\n", 1);
}
