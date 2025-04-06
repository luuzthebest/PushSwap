/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvvz <lvvz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 10:18:32 by hounajar          #+#    #+#             */
/*   Updated: 2025/04/06 11:49:14 by lvvz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	fill_arr(t_stack *a, int *arr)
{
	while (a)
	{
		*arr++ = a->content;
		a = a->next;
	}
}

void	sort_arr(int *arr, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		if (arr[i] > arr[i + 1])
		{
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
			i = -1;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*head;
	t_stack	*node;
	int		size;

	node = NULL;
	head = NULL;
	if (argc < 2)
		return (0);
	if (parse(argv, &head, node) == 0)
		ft_error(&head, &node);
	else
	{
		size = ft_lstsize(head);
		if (!is_sorted(head))
		{
			if (size <= 5)
				sort_small(&head, &node, size);
			else
				sort_big(&head, &node, size);
		}
	}
	free_stack(&head);
	free_stack(&node);
	return (0);
}
