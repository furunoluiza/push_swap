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

int	check_int(char *arg)
{
	int	i;

	i = 0;
	if (arg[i] == '+' ||arg[i] == '-')
		i++;
	while (arg[i] >= '0' && arg[i] <= '9')
		i++;
	if (arg[i] == '\0')
		return (1);
	return (0);
}

int	check_long(char *str)
{
	if (ft_atol(str) <= 2147483647 && ft_atol(str) >= -2147483648)
		return (1);
	else
		return (0);
}

int repeat_number(int argc, char **argv)
{
	int	i;

	int	j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		i = j + 1;
		while (i < argc)
		{
			if (ft_atol(argv[j]) == ft_atol(argv[i])) 
				return (1);
			i++;
		}
		j++;
	}
	return (0);
}

int check_error(int argc, char **argv)
{
	int i;
	
	i = 1;
	while (i < argc)
	{
		if (!check_int(argv[i]) || !check_long(argv[i]))
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int	*array;

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
		sort_elements(&stack_a, &stack_b);
		set_index(array, &stack_a);
		printf("Essa é a stack_a\n");
		print_stack(stack_a);
		// printf("Essa é a stack_b\n");
		// print_stack(stack_b);
		free_stack(stack_a, stack_b);
	}
	return (0);
}
