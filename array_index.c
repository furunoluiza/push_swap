/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_index.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:44:39 by lfuruno-          #+#    #+#             */
/*   Updated: 2024/04/01 17:47:27 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_index(int *array, t_list **stack)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = *stack;
	while (temp)
	{
		if (temp->value == array[i])
		{
			temp->index = i;
			temp = temp->next;
			i = 0;
		}
		else
			i++;
	}
}

static void	order_array(int argc, int **array)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	tmp = 0;
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
}

int	*fill_array(int argc, char **argv)
{
	int	i;
	int	j;
	int	num_argc;
	int	*array;

	i = 0;
	j = 1;
	num_argc = argc;
	array = malloc(sizeof(int) * (argc - 1));
	if (!array)
		return (NULL);
	while (argc > 1)
	{
		array[i] = ft_atoi(argv[j]);
		i++;
		j++;
		argc--;
	}
	order_array (num_argc, &array);
	return (array);
}
