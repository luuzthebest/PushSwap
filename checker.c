/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvvz <lvvz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 00:57:26 by lvvz              #+#    #+#             */
/*   Updated: 2025/04/01 17:54:07 by lvvz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"


int is_valid_num(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == '+' || str[i] == '-')
            i++;
        if (!str[i])
            return (0);
        if (str[i] < '0' || str[i] > '9')
            return 0;
        i++;
    }
    return (1);   
}

int dup_checker(t_stack *lst, long int num)
{
    if (num > 2147483647 || num < -2147483648)
        return 0;
    
    while (lst)
    {
        if (num == lst->content)
        {
            return (0);
        }
        lst = lst->next;
    }
    return (1);
}

int filter(char **splitted, long int num, t_stack **head, t_stack *node)
{
    int j = 0;
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
                } else
                    return (0);
            }
            return 1;
}
int parse(char **str, t_stack **head, t_stack *node)
{
        int i = 1;
        long int num = 0;
        int j = 0;
        char **splitted;
        while (str[i])
        {
            splitted = ft_split(str[i], ' ');
            if (!splitted)
                return 0;
            if (!filter(&splitted[j], num, head, node))
            {
                free_splitted(splitted);
                return 0;
            }
            
            free_splitted(splitted);
            i++;
        }
        return(1);
}

int main(int argc, char *argv[])
{
    t_stack *head;
    t_stack *node;
    char *instructions;

    node = NULL;
    head = NULL;
    if (argc < 2)
        return (0);
    if (parse(argv, &head, node) == 0)
        ft_error();
    instructions = get_next_line(0);
    while (instructions)
        {
            inst_check(instructions, &head, &node);
            free(instructions);
            instructions = get_next_line(0);
        }
    if (is_sorted(head) && !node)
        ft_putstr_fd("OK\n", 1);
    else
        ft_putstr_fd("KO\n", 1);    
    return 1;
}
