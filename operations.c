/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:40:16 by lfuruno-          #+#    #+#             */
/*   Updated: 2024/03/13 13:40:41 by lfuruno-         ###   ########.fr       */
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
    //print todas
}

void    swap_b(t_list **stack_b)
{
    t_list  *temp;
    if (*stack_b == NULL || *stack_b->next == NULL)
        return;
    temp = *stack_b->next;
    *stack_b->next = *stack_b;
    *stack_b = temp;
}

void    swaps(t_list **stack_a, t_list **stack_b)
{   
    swap_a(stack_a);
    swap_b(stack_b);
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
}  