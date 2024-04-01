/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:14:47 by lfuruno-          #+#    #+#             */
/*   Updated: 2024/03/12 17:03:04 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		*array;

	stack_a = NULL;
	stack_b = NULL;
	if (argc >= 2)
	{
		if (check_error(argc, argv) || repeat_number(argc, argv))
		{
			ft_putstr_fd("Error", 1);
			return (0);
		}
		array = fill_array(argc, argv);
		stack_a = fill_list(argc, argv);
		sort_elements(array, &stack_a, &stack_b);
		free_stack(stack_a, stack_b);
	}
	return (0);
}
