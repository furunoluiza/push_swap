/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_elements.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:14:33 by lfuruno-          #+#    #+#             */
/*   Updated: 2024/03/14 17:14:46 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    three_elements(t_list *stack_a)
{
    int first;
    int sec;
    int third;

    first = stack_a->value;
    sec = stack_a->next->value;
    third = stack_a->next->next->value;
    if (first < sec && sec > third) //1 2 3
    {
        swap_a(&stack_a);
        rotate_a(&stack_a);
    }
    else if (first > sec && sec < third) //2 1 3
        swap_a(&stack_a);
    else if (first < sec && sec > third) //2 3 1
        reverse_a(&stack_a);
    else if (first > sec && sec < third) //3 1 2
    {
        rotate_a(&stack_a);
        swap_a(&stack_a);
    }
    else if (first > sec && sec > third) //3 2 1
        reverse_a(&stack_a);
}

void    sort_elements(t_list *stack_a)
{
    int size;

    size = stack_size(stack_a);

    while (!check_order(stack_a))
    {
        if (size == 2)
            swap_a(&stack_a);
        else if (size == 3)
            three_elements(stack_a);
    }
}
