/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_elements.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:14:33 by lfuruno-          #+#    #+#             */
/*   Updated: 2024/03/14 17:14:46 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cmp(int	a, int	b)
{
	return (a > b);
}
//função proibida!

void    sort_two(t_list **stack)
{
    if ((*cmp)((*stack)->value, (*stack)->next->value) > 0)
        swap_a(*stack);
}

void    sort_elements(int argc, t_list **stack)
{
    if (argc < 2)
        return;
    else if (argc == 2)
        sort_two(stack);
}

//fazer uma função para percorrer a stack e ver o size
//escrever tudo isso dnv