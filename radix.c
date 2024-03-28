#include "push_swap.h"

void	radix(t_list **stack_a, t_list **stack_b)
{
	int	bit,

	bit = 1;
	while (check_order(*stack_a) == 0)
	{
		move_elements(stack_a, stack_b, bit);
		bit = bit << 1;
	}
}



void	move_elements(t_list **stack_a, t_list **stack_b, int bit)
{
	int	num_push;
	int	size;

	num_push = 0;
	size = stack_size(*stack_a);
	while (*stack_a && size > 0)
	{
		if (!((*stack_a)->index & bin))
		{
			push_b(stack_a, stack_b);
			num_push++;
		}
		else
			rotate_a(stack_a, stack_b);
		size--;
	}
	while (num_push > 0)
	{
		push_a(stack_a, stack_b);
		num_push--;
	}
}
