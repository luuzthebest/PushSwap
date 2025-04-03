/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lil_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvvz <lvvz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:15:30 by lvvz              #+#    #+#             */
/*   Updated: 2025/04/01 18:03:37 by lvvz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack **a)
{
	if (!is_sorted(*a))
		sa(a, 1);
}

void	sort_three(t_stack **a)
{
	int	first;
	int	second;
	int	last;

	first = (*a)->content;
	second = (*a)->next->content;
	last = (*a)->next->next->content;
	if (first > last && second < last)
		ra(a, 1);
	else if (first > second && first > last && second > last)
	{
		ra(a, 1);
		sa(a, 1);
	}
	else if (first < second && second > last && first > last)
		rra(a, 1);
	else if (second > first && second > last && first < last)
	{
		rra(a, 1);
		sa(a, 1);
	}
	else if (first > second && first < last)
		sa(a, 1);
}

void	pb_min(t_stack **a, t_stack **b, int offset)
{
	int	size;

	size = ft_lstsize(*a);
	if ((size / 2) >= offset)
	{
		while (offset--)
			ra(a, 1);
	}
	else
	{
		while (offset++ < size)
			rra(a, 1);
	}
	if (is_sorted(*a))
		return ;
	pb(a, b, 1);
}

void	s_min(t_stack **a, t_stack **b)
{
	t_stack	*temp;
	int		min;
	int		i;
	int		offset;

	min = (*a)->content;
	temp = *a;
	offset = 0;
	i = 1;
	while (temp && temp->next)
	{
		if (temp->next->content < min)
		{
			min = temp->next->content;
			offset = i;
		}
		temp = temp->next;
		i++;
	}
	pb_min(a, b, offset);
}

void	sort_small(t_stack **a, t_stack **b, int size)
{
	if (size == 2)
		sort_two(a);
	else if (size == 3)
		sort_three(a);
	else
	{
		if (size == 4)
			s_min(a, b);
		else if (size == 5)
		{
			s_min(a, b);
			s_min(a, b);
		}
		sort_three(a);
		pa(a, b, 1);
		pa(a, b, 1);
	}
}
