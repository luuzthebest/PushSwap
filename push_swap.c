/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hounajar <hounajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 10:18:32 by hounajar          #+#    #+#             */
/*   Updated: 2025/02/15 15:25:21 by hounajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

int parse(char **str)
{
        
        return(ft_atoi(*str));       
}

int main(int argc, char **argv)
{
    printf("Num of Args: %d\n", argc);
    int i= 0;
    while (argv[i])
    {
        printf("%s\n", argv[i] + 1);
        i++;
    }
    printf("%i\n", parse(&*argv));
    return 1;
}