/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvvz <lvvz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 01:47:34 by lvvz              #+#    #+#             */
/*   Updated: 2025/04/03 12:19:29 by lvvz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	offsets(int *s, int *e, int size)
{
	if (*s < *e)
		(*s)++;
	if (*e < size - 1)
		(*e)++;
}

void	cmpb(t_stack **a, t_stack **b, int *arr, int e)
{
	int	s;
	int	size;

	s = 0;
	size = ft_lstsize(*a);
	while (*a)
	{
		if ((*a)->content <= arr[s])
		{
			pb(a, b, 1);
			if ((*b)->next)
				rb(b, 1);
			offsets(&s, &e, size);
		}
		else if ((*a)->content <= arr[e])
		{
			pb(a, b, 1);
			if ((*b)->next && (*b)->content < (*b)->next->content)
				sb(b, 1);
			offsets(&s, &e, size);
		}
		else
			ra(a, 1);
	}
}

int	s_max(t_stack **b)
{
	t_stack	*temp;
	int		max;
	int		i;
	int		offset;

	max = (*b)->content;
	temp = *b;
	offset = 0;
	i = 0;
	while (temp)
	{
		if (temp->content > max)
		{
			max = temp->content;
			offset = i;
		}
		temp = temp->next;
		i++;
	}
	return (offset);
}

void	p_back(t_stack **a, t_stack **b)
{
	int	max;
	int	size;

	while (*b)
	{
		max = s_max(b);
		size = ft_lstsize(*b);
		if (max == 0)
			pa(a, b, 1);
		else if (max <= size / 2)
			while (s_max(b) != 0)
				rb(b, 1);
		else
			while (s_max(b) != 0)
				rrb(b, 1);
	}
}

void	sort_big(t_stack **a, t_stack **b, int size)
{
	int	*arr;
	int	end;

	arr = malloc(sizeof(int) * size);
	if (!arr)
		return ;
	fill_arr(*a, arr);
	sort_arr(arr, size);
	if (size <= 100)
		end = size / 6;
	else
		end = size / 14;
	cmpb(a, b, arr, end);
	p_back(a, b);
	free(arr);
}
