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
        printf("comparando stack:%d == array:%d\n",(*stack)->value, array[i]);
        if ((*stack)->value == array[i])
        {
            printf("entreeeeeeee!\n");
            (*stack)->index = i;
            *stack = head;
            if ((*stack)->value == array[i])
                (*stack)->index = i;
            i++;
        }
        *stack = (*stack)->next;
    }
    *stack = head;
}

static void    order_array(int argc, int **array)
{
    int i;
    int j;
    int tmp;

    i = 0;
    tmp = 0;
    printf("order: posição0doarray: %d\n", (*array)[0]);
    while (i < (argc - 1))
    {
        j = i + 1;
        while (j < (argc - 1))
        {
            if ((*array)[i] > (*array)[j])
            {
                tmp = (*array)[i];
                (*array)[i] = (*array)[j];
                (*array)[j] = tmp;
                j = i;
            }
            j++;
        }
        i++;
    }
    printf("order: posição4doarray: %d\n", (*array)[4]);
}

int *fill_array(int argc, char **argv)
{
    int i;
    int j;
    int num_argc;
    int *array;

    i = 0;
    j = 1;
    num_argc = argc;
    array = malloc(sizeof(int) * (argc - 1));
    if (!array)
        return(NULL);
    while (argc > 1)
    {
        array[i] = ft_atoi(argv[j]);
        printf("valor do arrray:%d index:%d\n",array[i], i);
        i++;
        j++;
        argc--;
    }
    order_array(num_argc, &array);
    return(array);
}