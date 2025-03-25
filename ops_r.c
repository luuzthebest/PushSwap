/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_r.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvvz <lvvz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:53:27 by lvvz              #+#    #+#             */
/*   Updated: 2025/03/25 11:17:24 by lvvz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(t_stack **a)
{
    rotate(a);
    ft_putstr_fd("ra\n", 1);
}
void rb(t_stack **b)
{
    rotate(b);
    ft_putstr_fd("rb\n", 1);
}
void rr(t_stack **a, t_stack **b)
{
    rotate(a);
    rotate(b);
    ft_putstr_fd("rr\n", 1);
}
void rra(t_stack **a)
{
    r_rotate(a);
    ft_putstr_fd("rra\n", 1);
}
void rrb(t_stack **b)
{
    r_rotate(b);
    ft_putstr_fd("rrb\n", 1);
}
