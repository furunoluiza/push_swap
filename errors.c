/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:43:39 by lfuruno-          #+#    #+#             */
/*   Updated: 2024/04/01 16:43:49 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_int(char *arg)
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

static int	check_long(char *str)
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
