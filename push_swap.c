/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvvz <lvvz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 10:18:32 by hounajar          #+#    #+#             */
/*   Updated: 2025/03/18 03:53:37 by lvvz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
// int valid_input(char **str)
// { 
//     printf("Entered-----------\n");
//     printf("s: %d\n", *str[2]);
//     int i = 1;
//     if (!*str[i])
//         return 0;
//     while ((str[i]) && ((*str[i] >= '0' && *str[i] <= '9') || (*str[i] >= 9 && *str[i] <= 13) || *str[i] == 32))
//         i++;
//     printf("i: %d\n", i);
//     if (!str[i])
//         return 1;
//     else
//         return 0;
// }
// int parse(char **str)
// {
//         int i = 0;
//         // int j =;
//         while (valid_input(&str[i]))
//         {
//             printf("here: %s", *str);
//             i++;
//         }
//         // printf("result: %i\n", j);
//         char **splitted = ft_split(*str, ' ');
//         printf("%s\n", *splitted);
//         while (splitted[i])
//         {
//             printf("splitted: %s\n", splitted[i]);
//             i++;
//         }
//             // write(2, "Error", 5);ect that teaches you about sorting algorithms and how to optimize them. The project involves sorting a stack of integers using a limited set of operations (push, swap and rotate) and minimizing the number of moves. 
        
        
//         return(1);
// }
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
int dup_checker(t_stack *lst, int num)
{
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
int parse(char **str, t_stack *head)
{
        t_stack *node;
        int i = 1;
        int j = 0;
        int num;
        char **splitted;
        while (str[i])
        {
            splitted = ft_split(str[i], ' ');
            while (splitted[j])
            {
                if (is_valid_num(splitted[j]))
                {
                    num = ft_atoi(splitted[j]);
                    if (!dup_checker(head, num))
                    {
                        return (0);
                    }
                    node = ft_lstnew(num);
                    ft_lstadd_back(&head, node);
                    j++;
                } else
                {
                 // free   
                    return (0);
                }
           }
            i++;
        }
        printf("----------stack A----------\n");
        while (head)
        {
            printf("%i\n", head->content);
            head = head->next;
        }
        
        return(1);
}
int main(int argc, char **argv)
{
    t_stack *head = NULL;
    

    printf("Num of Args: %d\n", argc);
    // int i= 0;
    // while (argv[i])
    // {
    //     printf("%s\n", argv[0]);
    //     i++;
    // }
    if (parse(argv, head) == 0)
        printf("Error\n");
    else
    {
        printf("Parsing Done Successefully");
    }
    
    // printf("%s", argv[2]);
    return 1;
}