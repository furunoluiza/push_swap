/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:33:21 by lfuruno-          #+#    #+#             */
/*   Updated: 2024/03/12 17:01:20 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_top(t_list **stack_top, int argv) //função para add um nó no topo da pilha
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	node->value = argv;
	node->index = -1;
	node->next = *stack_top;
	*stack_top = node;
}

void	push_tail(t_list **stack_top, int argv)
{
	t_list	*node;
	t_list	*temp;

	node = malloc(sizeof(t_list));
	node->value = argv;
	node->index = -1;
	node->next = NULL;
	if (*stack_top == NULL || stack_top == NULL)
	{
		*stack_top = node;
		return; 
	}
	temp = *stack_top;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node;
}

void	fill_list(int argc, char **argv, t_list	*stack_a)
{
	int		i;

	i = 1;
	while (argc-- > 1)
		push_tail(&stack_a, ft_atol(argv[i++]));
}
