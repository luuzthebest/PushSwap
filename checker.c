/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvvz <lvvz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 00:57:26 by lvvz              #+#    #+#             */
/*   Updated: 2025/04/03 10:47:29 by lvvz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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
		ft_error();
	instructions = get_next_line(0);
	while (instructions)
	{
		if (!inst_check(instructions, &head, &node))
			ft_error();
		free(instructions);
		instructions = get_next_line(0);
	}
	if (is_sorted(head) && !node)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	free_stack(&head);
	free_stack(&node);
	return (1);
}
