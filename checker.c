/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvvz <lvvz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 00:57:26 by lvvz              #+#    #+#             */
/*   Updated: 2025/04/06 12:02:21 by lvvz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static void	check_result(t_stack *head, t_stack *node)
{
	if (is_sorted(head) && !node)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
}

int	main(int argc, char *argv[])
{
	t_stack	*head;
	t_stack	*node;
	char	*instructions;

	node = NULL;
	head = NULL;
	if (argc < 2)
		return (0);
	if (parse(argv, &head, node) == 0)
		ft_error(&head, &node);
	instructions = get_next_line(0);
	while (instructions)
	{
		if (!inst_check(instructions, &head, &node))
		{
			free(instructions);
			ft_error(&head, &node);
		}
		free(instructions);
		instructions = get_next_line(0);
	}
	check_result(head, node);
	free_stack(&head);
	free_stack(&node);
	return (0);
}
