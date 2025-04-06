/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvvz <lvvz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 10:18:35 by hounajar          #+#    #+#             */
/*   Updated: 2025/04/06 11:48:51 by lvvz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H
# include <stdio.h>
# include "libft/libft.h"
# include <fcntl.h>

int		parse(char **str, t_stack **head, t_stack *node);
void	ft_error(t_stack **a, t_stack **b);

void	free_splitted(char **splitted);
void	free_stack(t_stack **head);

int		is_sorted(t_stack *head);

void	swap(t_stack **head);
void	sa(t_stack **a, int trace);
void	sb(t_stack **b, int trace);
void	ss(t_stack **a, t_stack **b, int trace);
void	push(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b, int trace);
void	pb(t_stack **a, t_stack **b, int trace);
void	r_rotate(t_stack **a);
void	rrb(t_stack **b, int trace);
void	rra(t_stack **a, int trace);
void	rotate(t_stack **a);
void	rr(t_stack **a, t_stack **b, int trace);
void	rb(t_stack **b, int trace);
void	ra(t_stack **a, int trace);
void	rrr(t_stack **a, t_stack **b, int trace);

# define BUFFER_SIZE 1

size_t	gnl_strlcpy(char *dst, const char *src, size_t size);
int		gnl_strchr(char *s, int c);
size_t	gnl_strlen(const char *str);
char	*gnl_strdup(const char *s);
char	*gnl_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);
int		inst_check(char *instruction, t_stack **a, t_stack **b);

#endif