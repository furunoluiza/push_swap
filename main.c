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

int repeat_number(int arg, long *array)
{
	//Comparar o valor com todos os outros, talvez são dois loops
	int	i;

	i = 0;
	while (arg-- > 0)
	{
		if (arg > 1 && array[i] == array[i + 1])
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	long *array;

	i = 1;
	j = 0;
	if (argc >= 2)
	{
		array = malloc(sizeof(long) * (argc - 1));
		if (!array)
			return (0);
		while (i < argc)
		{
			if (!(check_int(argv[i]) && check_long(argv[i])))
			{
				ft_putstr_fd("Error", 1);
				return (0);
			}
			array[j] = ft_atol(argv[i]);
			j++;
			i++;
		}
		printf("%d", repeat_number(argc, array));
	}
	return (0);
}
