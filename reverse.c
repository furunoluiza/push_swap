/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:13:10 by lfuruno-          #+#    #+#             */
/*   Updated: 2024/04/01 18:04:12 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_stack(t_list **stack)
{
	t_list	*tail;
	t_list	*prev;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	tail = *stack;
	prev = NULL;
	while (tail->next != NULL)
	{
		prev = tail;
		tail = tail->next;
	}
	tail->next = *stack;
	prev->next = NULL;
	*stack = tail;
}

void	reverse_a(t_list **stack_a)
{
	reverse_stack(stack_a);
	ft_putstr_fd("rra\n", 1);
}

void	reverse_b(t_list **stack_b)
{
	reverse_stack(stack_b);
	ft_putstr_fd("rrb\n", 1);
}

void	reverse_ab(t_list **stack_a, t_list **stack_b)
{
	reverse_stack(stack_a);
	reverse_stack(stack_b);
	ft_putstr_fd("rrr\n", 1);
}
