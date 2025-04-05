/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_utils.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvvz <lvvz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 18:30:46 by lvvz              #+#    #+#             */
/*   Updated: 2025/04/05 16:21:06 by lvvz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "push_swap_bonus.h"
#include "libft/libft.h"

int	is_valid_num(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	if (i > 11)
		return (0);
	return (1);
}

int	dup_checker(t_stack *lst, long int num)
{
	if (num > 2147483647 || num < -2147483648)
		return (0);
	while (lst)
	{
		if (num == lst->content)
			return (0);
		lst = lst->next;
	}
	return (1);
}

int	filter(char **splitted, long int num, t_stack **head, t_stack *node)
{
	int	j;

	j = 0;
	while (splitted[j])
	{
		if (is_valid_num(splitted[j]))
		{
			num = ft_atoi(splitted[j]);
			if (!dup_checker(*head, num))
				return (0);
			node = ft_lstnew(num);
			ft_lstadd_back(head, node);
			j++;
		}
		else
			return (0);
	}
	return (1);
}

int	parse(char **str, t_stack **head, t_stack *node)
{
	int			i;
	long int	num;
	int			j;
	char		**splitted;

	i = 1;
	j = 0;
	num = 0;
	while (str[i])
	{
		splitted = ft_split(str[i], ' ');
		if (!splitted)
			return (free_stack(head), 0);
		if (!filter(&splitted[j], num, head, node))
		{
			free_splitted(splitted);
			free_stack(head);
			return (0);
		}
		free_splitted(splitted);
		i++;
	}
	return (1);
}
