/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hounajar <hounajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 10:18:32 by hounajar          #+#    #+#             */
/*   Updated: 2025/02/27 15:44:11 by hounajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
int valid_input(char **str)
{ 
    printf("Entered-----------\n");
    printf("s: %d\n", *str[2]);
    int i = 1;
    if (!*str[i])
        return 0;
    while ((str[i]) && ((*str[i] >= '0' && *str[i] <= '9') || (*str[i] >= 9 && *str[i] <= 13) || *str[i] == 32))
        i++;
    printf("i: %d\n", i);
    if (!*str[i])
        return 1;
    else
        return 0;
}
int parse(char **str)
{
        int i = 0;
        // int j =;
        while (valid_input(&str[i]))
        {
            printf("here: %s", *str);
            i++;
        }
        // printf("result: %i\n", j);
        char **splitted = ft_split(*str, ' ');
        printf("%s\n", *splitted);
        while (splitted[i])
        {
            printf("splitted: %s\n", splitted[i]);
            i++;
        }
            // write(2, "Error", 5);ect that teaches you about sorting algorithms and how to optimize them. The project involves sorting a stack of integers using a limited set of operations (push, swap and rotate) and minimizing the number of moves. 
        
        
        return(1);
}

int main(int argc, char **argv)
{
    printf("Num of Args: %d\n", argc);
    // int i= 0;
    // while (argv[i])
    // {
    //     printf("%s\n", argv[0]);
    //     i++;
    // }
    printf("%i\n", parse(argv));
    
    // printf("%s", argv[2]);
    return 1;
}