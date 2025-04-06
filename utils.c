/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvvz <lvvz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 07:45:48 by lvvz              #+#    #+#             */
/*   Updated: 2025/04/06 11:47:37 by lvvz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	free_stack(t_stack **head)
{
	t_stack	*temp;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}

void	free_splitted(char **splitted)
{
	int	j;

	j = 0;
	while (splitted[j])
		free(splitted[j++]);
	free(splitted);
}

int	is_sorted(t_stack *head)
{
	int	i;
	int	size;

	i = 0;
	if (!head)
		return (0);
	size = ft_lstsize(head);
	while (head->next)
	{
		if (head->content < head->next->content)
			i++;
		head = head->next;
	}
	if (i == size - 1)
		return (1);
	else
		return (0);
	return (i);
}

void	ft_error(t_stack **a, t_stack **b)
{
	free_stack(a);
	free_stack(b);
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

int	inst_check(char *instruction, t_stack **a, t_stack **b)
{
	if (ft_strncmp(instruction, "pa\n", ft_strlen(instruction)) == 0)
		pa(a, b, 0);
	else if (ft_strncmp(instruction, "pb\n", ft_strlen(instruction)) == 0)
		pb(a, b, 0);
	else if (ft_strncmp(instruction, "sa\n", ft_strlen(instruction)) == 0)
		sa(a, 0);
	else if (ft_strncmp(instruction, "sb\n", ft_strlen(instruction)) == 0)
		sb(b, 0);
	else if (ft_strncmp(instruction, "ss\n", ft_strlen(instruction)) == 0)
		ss(a, b, 0);
	else if (ft_strncmp(instruction, "ra\n", ft_strlen(instruction)) == 0)
		ra(a, 0);
	else if (ft_strncmp(instruction, "rb\n", ft_strlen(instruction)) == 0)
		rb(b, 0);
	else if (ft_strncmp(instruction, "rr\n", ft_strlen(instruction)) == 0)
		rr(a, b, 0);
	else if (ft_strncmp(instruction, "rra\n", ft_strlen(instruction)) == 0)
		rra(a, 0);
	else if (ft_strncmp(instruction, "rrb\n", ft_strlen(instruction)) == 0)
		rrb(b, 0);
	else if (ft_strncmp(instruction, "rrr\n", ft_strlen(instruction)) == 0)
		rrr(a, b, 0);
	else
		return (0);
	return (1);
}
