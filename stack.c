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

void	add_node_top(t_list **stack_top, int argv) //função para add um nó no topo da pilha
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	node->value = argv;
	node->next = *stack_top;
	*stack_top = node;
}

void	free_stack(t_list *stack_a, t_list *stack_b)
{
	t_list	*temp;
	while (stack_a)
	{
		temp = stack_a;
		stack_a = stack_a->next;
		free(temp);
	}
	while (stack_b)
	{
		temp = stack_b;
		stack_b = stack_b->next;write(1, "ola", 3);
		free(temp);
	}
}

void	print_stack(t_list *stack)
{
	printf("Começa a printar a stack:\n");
	while (stack != NULL)
	{
		printf("%d\n", stack->value);
		stack = stack->next;
	}
}

t_list	*fill_list(int argc, char **argv)
{
	t_list	*stack_a;

	stack_a = NULL;
	while (--argc > 0)
		add_node_top(&stack_a, ft_atol(argv[argc]));
	return (stack_a);
}
