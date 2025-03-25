/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvvz <lvvz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 10:18:32 by hounajar          #+#    #+#             */
/*   Updated: 2025/03/25 11:27:20 by lvvz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

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
void print_list(t_stack *head)
{
    t_stack *node = head;
    printf("Stack: ");
    while (node)
    {
        printf("%d -> ", node->content);
        node = node->next;
    }
    printf("NULL\n");
}

int main(int argc, char **argv)
{
    t_stack *head = NULL;
    t_stack *node = NULL;

    node = ft_lstnew(1);
    t_stack *node2 = ft_lstnew(4);
    node->next = node2;
    t_stack *node3 = ft_lstnew(6);
    node2->next = node3;

    


    (void)argc;
    if (parse(argv, &head, node) == 0)
        printf("Error\n");
    else
    {
        printf("Parsing Done Successefully\n");
        if (!is_sorted(head))
        {
            printf("not sorted\n");
        }
    }
    
    printf("---- stack a -----\n");
    print_list(head);
    
    // printf("---- stack b -----\n");
    // print_list(node);
    
   rotate(&head);
    
    printf("---- stack a -----\n");
    print_list(head);
    
    // printf("---- stack b -----\n");
    // print_list(node);
    
    free_stack(&head);
    free_stack(&node);
    return 1;
}
