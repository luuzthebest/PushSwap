/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvvz <lvvz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:03:28 by lvvz              #+#    #+#             */
/*   Updated: 2025/04/01 17:03:10 by lvvz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"




void sa(t_stack **a, int trace)
{
    swap(a);
    if (trace == 1)
        ft_putstr_fd("sa\n", 1);
    return ;
}
void sb(t_stack **b, int trace)
{
    swap(b);
    if (trace == 1)
        ft_putstr_fd("sb\n", 1);
    return ;
}
void ss(t_stack **a, t_stack **b, int trace)
{
    swap(a);
    swap(b);
    if (trace == 1)
        ft_putstr_fd("ss\n", 1);
    return ;
}
void pa(t_stack **a, t_stack **b, int trace)
{
    push(a, b);
    if (trace == 1)
        ft_putstr_fd("pa\n", 1);
    return ;
}
void pb(t_stack **a, t_stack **b, int trace)
{
    push(b, a);
    if (trace == 1)
        ft_putstr_fd("pb\n", 1);
    return ;
}