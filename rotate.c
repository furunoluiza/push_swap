/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:11:29 by lfuruno-          #+#    #+#             */
/*   Updated: 2024/03/14 13:11:36 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rotate_stack(t_list **stack)
{
    t_list  *head;
    t_list  *tail;

    if (*stack == NULL || (*stack)->next == NULL)
        return;
    head = *stack;
    tail = *stack;
    while (tail->next != NULL)
        tail = tail->next;
    *stack = head->next;
    tail->next = head;
    head->next = NULL;
}

void    rotate_a(t_list **stack_a)
{
    rotate_stack(stack_a);
    ft_putstr_fd("ra\n", 1);
}

void    rotate_b(t_list **stack_b)
{
    rotate_stack(stack_b);
    ft_putstr_fd("rb\n", 1);
}

void    rotate_ab(t_list **stack_a, t_list **stack_b)
{
    rotate_stack(stack_a);
    rotate_stack(stack_b);
    ft_putstr_fd("rr\n", 1);
}