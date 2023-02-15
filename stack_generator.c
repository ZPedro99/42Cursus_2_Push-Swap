/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_generator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:23:57 by jomirand          #+#    #+#             */
/*   Updated: 2023/02/15 10:30:51 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_fill_stack(int argc, char **argv, s_info *stacks)
{
	if(!ft_num_only(argv, 1))
	{
		free(stacks);
		write(2, "Error\n", 6);
		exit(0);
	}
	stacks->size_a = argc - 1;
	stacks->stack_a = ft_memalloc(stacks->size_a);
	stacks->i = 0;
	while(stacks->i < stacks->size_a)
	{
		stacks->stack_a[stacks->i] = ft_atoi(argv[stacks->i + 1]);
		stacks->i++;
	}
	if(!ft_check_doubles(stacks))
	{
		free(stacks->stack_a);
		free(stacks);
		write(2, "Error\n", 6);
		exit(0);
	}
}

void	ft_fill_stack_split(char *str, s_info *stacks)
{
	char **stack;

	stack = ft_split(str, ' ');
	if(!ft_num_only(stack, 2))
	{
		ft_free_split_error(str, stack, stacks);
		exit(0);
	}
	stacks->size_a = ft_numcount(str, ' ');
	stacks->stack_a = ft_memalloc(stacks->size_a);
	stacks->i = 0;
	while(stack[stacks->i])
	{
		stacks->stack_a[stacks->i] = ft_atoi(stack[stacks->i]);
		stacks->i++;
	}
	if(!ft_check_doubles(stacks))
	{
		ft_free_split_error(str, stack, stacks);
		exit(0);
	}
	ft_free_split(str, stack);
}