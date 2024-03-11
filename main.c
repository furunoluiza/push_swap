/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:14:47 by lfuruno-          #+#    #+#             */
/*   Updated: 2024/03/11 19:34:32 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

//check se só tem numeros, mas ver ser tem + ou -
//check se tem mais de 11 caract
//transformar em inteiro
//creact_stacks, pilha para colocar os inteiros
//atol para passar o maior inteiro printável, uma vez que vai ser uma atoi com long

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
			{
				printf("1"); 
				return (1);
			}
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
	if (argc >= 2)
	{
		if (check_error(argc, argv) || repeat_number(argc, argv))
		{
			ft_putstr_fd("Error", 1);
			return (0);
		}
	}
	return (0);
}
