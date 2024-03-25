/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_elements.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:14:33 by lfuruno-          #+#    #+#             */
/*   Updated: 2024/03/20 17:17:31 by lfuruno-         ###   ########.fr       */
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

//quando chama a função no mesmo arq coloca static e n precisa colocar no .h

static int smaller_number(t_list **stack_a)
{
    int smaller;

    smaller = (*stack_a)->value;
    while ((*stack_a)->next != NULL)
    {
        if (smaller > (*stack_a)->next->value)
            smaller = (*stack_a)->next->value;
        *stack_a = (*stack_a)->next;
    }
    return (smaller);
}
//Posso mudar essa parte pra retornar a posição do smaller e dps mudar minhas funções

static void four_elements(t_list **stack_a, t_list **stack_b)
{
    int smaller;
    t_list  *head;

    head = *stack_a;
    smaller = smaller_number(&head);
	if ((*stack_a)->next->value == smaller)
        swap_a(stack_a);
    else if ((*stack_a)->next->next->value == smaller)
    {
        reverse_a(stack_a);
        reverse_a(stack_a);
    }
    else if ((*stack_a)->next->next->next->value == smaller)
        reverse_a(stack_a);
    push_b(stack_a, stack_b);
    three_elements(stack_a);
    push_a(stack_a, stack_b);
}

//como vou indexar? função para indexar a stack?
static void five_elements(t_list **stack_a, t_list **stack_b)
{
    int smaller;
    t_list  *head;

    head = *stack_a;
    smaller = smaller_number(&head);
    if ((*stack_a)->next->value == smaller)
        swap_a(stack_a);
    else if ((*stack_a)->next->next->value == smaller)
    {
        rotate_a(stack_a);
        rotate_a(stack_a);
    }
    else if ((*stack_a)->next->next->next->value == smaller)
    {
        reverse_a(stack_a);
        reverse_a(stack_a);
    }
    else if ((*stack_a)->next->next->next->next->value == smaller)
        reverse_a(stack_a);
    push_b(stack_a, stack_b);
    four_elements(stack_a, stack_b);
    push_a(stack_a, stack_b);
}

void    sort_elements(t_list **stack_a, t_list **stack_b)
{
    int size;

    size = stack_size(*stack_a);

    if (!check_order(*stack_a))
    {
        if (size == 2)
            swap_a(stack_a);
        else if (size == 3)
            three_elements(stack_a);
        else if (size == 4)
            four_elements(stack_a, stack_b);
        else if (size == 5)
            five_elements(stack_a, stack_b);
    }
}
