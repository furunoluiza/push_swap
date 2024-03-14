/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:13:10 by lfuruno-          #+#    #+#             */
/*   Updated: 2024/03/14 13:13:13 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    reverse_stack(t_list **stack)
{
    t_list  *head;
    t_list  *tail;
    t_list  *prev;

    if (*stack == NULL || *stack->next == NULL)
        return;
    head = *stack;
    tail = *stack;
    while (tail->next != NULL)
    {
        prev = tail;
        tail = tail->next;
    }
    prev->next = NULL;
    tail->next = head;
    *stack = tail;
}

void    reverse_a(t_list **stack_a)
{
    reverse_stack(*stack_a);
    fd_putstr_fd("rra", 1);
}

void    reverse_b(t_list **stack_b)
{
    reverse_stack(*stack_b);
    fd_putstr_fd("rrb", 1);
}

void    reverse_ab(t_list **stack_a, t_list **stack_b)
{
    reverse_stack(*stack_a);
    reverse_stack(*stack_b);
    fd_putstr_fd("rrr", 1);
}
