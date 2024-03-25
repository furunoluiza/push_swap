/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_index.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:44:39 by lfuruno-          #+#    #+#             */
/*   Updated: 2024/03/25 16:44:41 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void set_index(int *array, t_list **stack)
{
    int i;
    t_list  *head;

    i = 0;
    head = *stack;
    while ((*stack)->next != NULL)
    {
        if ((*stack)->value == array[i])
        {
            (*stack)->index = i;
            *stack = head;
            i++;
        }
        *stack = (*stack)->next;
    }
    *stack = head;
}

static void    order_array(int argc, int *array)
{
    int i;
    int j;
    int tmp;

    i = 0;
    j = 1;
    tmp = 0;
    while (i < argc)
    {
        while (j < (argc - 1))
        {
            if (array[i] > array[j])
            {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
                j = i;
            }
            j++;
        }
        i++;
    }
}

int *fill_array(int argc, char **argv)
{
    int i;
    int j;
    int *array;

    i = 0;
    j = 1;
    array = malloc(sizeof(int) * argc);
    if (!array)
        return(NULL);
    while (argc > 0)
    {
        array[i++] = ft_atol(argv[j++]);
        argc--;
    }
    array[i] = "\0";
    order_array(argc, array);
    return(array);
}