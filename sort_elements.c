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

static void    three_elements(t_list **stack_a)
{
    int first;
    int sec;
    int third;

    first = (*stack_a)->value;
    sec = (*stack_a)->next->value;
    third = (*stack_a)->next->next->value;
    if (first < sec && sec > third && first < third) //1 3 2
    {
        swap_a(stack_a);
        rotate_a(stack_a);
    }
    else if (first > sec && sec < third && first < third) //2 1 3
        swap_a(stack_a);
    else if (first < sec && sec > third && first > third) //2 3 1
        reverse_a(stack_a);
    else if (first > sec && sec < third && first > third) //3 1 2
    {
        rotate_a(stack_a);
        swap_a(stack_a);
    }
    else if (first > sec && sec > third && first > third) //3 2 1
    {
        swap_a(stack_a);
        reverse_a(stack_a);
    }
}
//implementar a ordem comparando o primeiro e o terceiro
//quando chama a função no mesmo arq coloca static e n precisa colocar no .h
//manda um numero pra b(pensar no numero que vou mandar) - tem que ser o menor numero
static t_list *smaller_number(t_list **stack_a)
{
    t_list  *smaller;

    smaller = *stack_a;
    while ((*stack_a)->next != NULL)
    {
        if (smaller->value > (*stack_a)->next->value)
            smaller = (*stack_a)->next;
        *stack_a = (*stack_a)->next;
    }
    return (smaller);
}

static void four_elements(t_list **stack_a, t_list **stack_b)
{
    t_list  *smaller;

    smaller = smaller_number(stack_a);
    smaller->next = *stack_b;
    *stack_b = smaller;
    three_elements(stack_a);
    (*stack_b)->next = *stack_a;
    *stack_a = *stack_b;
}
//Eu tirei o menor elemento da stack, mas ignorei totalmente onde ele estaria dentro da minha stack
void    sort_elements(t_list **stack_a, t_list **stack_b)
{
    int size;

    size = stack_size(*stack_a);

    while (!check_order(*stack_a))
    {
        if (size == 2)
            swap_a(stack_a);
        else if (size == 3)
            three_elements(stack_a);
        else if (size == 4)
            four_elements(stack_a, stack_b);
    }
}
