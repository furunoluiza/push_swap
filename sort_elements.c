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

void    sort_elements(t_list *stack_a)
{
    int size;

    size = stack_size(stack_a);
    if (size < 2)
        return;
    while (!check_order(stack_a))
    {
        if (size == 2)
            swap_a(&stack_a);
    }
}
