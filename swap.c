/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:59:50 by lfuruno-          #+#    #+#             */
/*   Updated: 2024/03/14 15:00:06 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_swap(t_list **stack)
{
    t_list  *temp;

    if (*stack == NULL || (*stack)->next == NULL)
        return;
    temp = (*stack)->next;
    (*stack)->next = temp->next;
    temp->next = *stack;
    *stack = temp;
}

void    swap_a(t_list **stack_a)
{
    ft_swap(stack_a);
    ft_putstr_fd("sa\n", 1);
}

void    swap_b(t_list **stack_b)
{
    ft_swap(stack_b);
    ft_putstr_fd("sb\n", 1);
}

void    swap_ab(t_list **stack_a, t_list **stack_b)
{
    ft_swap(stack_a);
    ft_swap(stack_b);
    ft_putstr_fd("ss\n", 1);
}