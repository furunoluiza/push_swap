/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:00:19 by lfuruno-          #+#    #+#             */
/*   Updated: 2024/03/14 15:00:34 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_push(t_list **stack_a, t_list **stack_b)
{
    t_list  *head_b;

    if (*stack_b == NULL)
        return;
    head_b = *stack_b;
    *stack_b = head_b->next;
    head_b->next = *stack_a;
    *stack_a = head_b;
}

void    push_a(t_list **stack_a, t_list **stack_b)
{
    ft_push(stack_a, stack_b);
    ft_putstr_fd("pa\n", 1);
}

void    push_b(t_list **stack_a, t_list **stack_b)
{
    ft_push(stack_b, stack_a);
    ft_putstr_fd("pb\n", 1);
}