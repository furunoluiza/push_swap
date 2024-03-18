/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:03:34 by lfuruno-          #+#    #+#             */
/*   Updated: 2024/03/12 17:04:39 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>

typedef struct	s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}					t_list;

/* push_swap functions */
int check_int(char *arg);
int check_error(int argc, char **argv);
int repeat_number(int argc, char **argv);
int	check_order(t_list *stack);
int	stack_size(t_list *stack);
void    add_node_top(t_list **stack_top, int argv);
void	free_stack(t_list *stack_a, t_list *stack_b);
void	print_stack(t_list *stack);
t_list    *fill_list(int argc, char **argv);

/* operations functions */
void    sort_elements(t_list **stack);

void    ft_swap(t_list **stack);
void    swap_a(t_list **stack_a);
void    swap_b(t_list **stack_b);
void    swap_ab(t_list **stack_a, t_list **stack_b);
void    ft_push(t_list **stack_a, t_list **stack_b);
void    push_a(t_list **stack_a, t_list **stack_b);
void    push_b(t_list **stack_a, t_list **stack_b);
void    rotate_stack(t_list **stack);
void    rotate_a(t_list **stack_a);
void    rotate_b(t_list **stack_b);
void    rotate_ab(t_list **stack_a, t_list **stack_b);
void    reverse_stack(t_list **stack);
void    reverse_a(t_list **stack_a);
void    reverse_b(t_list **stack_b);
void    reverse_ab(t_list **stack_a, t_list **stack_b);

#endif