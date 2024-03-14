/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:47:40 by lfuruno-          #+#    #+#             */
/*   Updated: 2024/03/14 12:47:44 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void    swap_a(t_list **stack_a)
{
    t_list  *temp;

    if (*stack_a == NULL || *stack_a->next == NULL)
        return;
    temp = *stack_a->next;
    *stack_a->next = *stack_a;
    *stack_a = temp;
    fd_putstr_fd("sa", 1);
}

void    swap_b(t_list **stack_b)
{
    t_list  *temp;
    if (*stack_b == NULL || *stack_b->next == NULL)
        return;
    temp = *stack_b->next;
    *stack_b->next = *stack_b;
    *stack_b = temp;
    fd_putstr_fd("sb", 1);
}

void    swaps(t_list **stack_a, t_list **stack_b)
{   
    swap_a(stack_a);
    swap_b(stack_b);
    fd_putstr_fd("ss", 1);
}

void    push_a(t_list **stack_a, t_list **stack_b)
{
    t_list  *head_b;

    if (*stack_b == NULL)
        return;
    head_b = *stack_b;
    *stack_b = head_b->next; //remover o elemento do topo da stack_b pop
    head_b->next = *stack_a; //prox elemento do topo da stack b é o elemento do topo da stack_a
    *stack_a = head_b; //elemento do topo da stack_a vai ser o elemento que estava no topo da stack_b
    fd_putstr_fd("pa", 1);
}

void    push_b(t_list **stack_a, t_list stack **b)
{
    t_list  *head_a;

    if (*stack_a == NULL)
        return;
    head_a = *stack_a; //pop
    *stack_a = head_a->next; //pop
    head_a->next = *stack_b; //push -> estou atualizando o endereço do next para apontar para o topo da stack_b
    *stack_b = head_a; //push
    fd_putstr_fd("pb", 1);
}  
