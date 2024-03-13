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
void    add_node_top(t_list **stack_top, int argv);
void	free_stack(t_list *stack_a);
void	print_stacks(t_list *stack_a);
t_list    *fill_list(int argc, char **argv);

#endif
