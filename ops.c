/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvvz <lvvz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:03:28 by lvvz              #+#    #+#             */
/*   Updated: 2025/03/25 11:20:28 by lvvz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"




void sa(t_stack **a)
{
    swap(a);
    ft_putstr_fd("sa\n", 1);
    return ;
}
void sb(t_stack **b)
{
    swap(b);
    ft_putstr_fd("sb\n", 1);
    return ;
}
void ss(t_stack **a, t_stack **b)
{
    swap(a);
    swap(b);
    ft_putstr_fd("ss\n", 1);
    return ;
}
void pa(t_stack **a, t_stack **b)
{
    push(a, b);
    ft_putstr_fd("pa\n", 1);
    return ;
}
void pb(t_stack **a, t_stack **b)
{
    push(b, a);
    ft_putstr_fd("pb\n", 1);
    return ;
}