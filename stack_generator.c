/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_generator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:23:57 by jomirand          #+#    #+#             */
/*   Updated: 2023/02/20 11:53:07 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_fill_stack(int argc, char **argv, t_info *s)
{
	if (!ft_num_only(argv, 1))
	{
		free(s);
		write(2, "Error\n", 6);
		exit(0);
	}
	s->size_a = argc - 1;
	s->stack_a = ft_memalloc(s->size_a);
	s->i = 0;
	while (s->i < s->size_a)
	{
		s->stack_a[s->i] = ft_atoi(argv[s->i + 1]);
		s->i++;
	}
	if (!ft_check_doubles(s))
	{
		free(s->stack_a);
		free(s);
		write(2, "Error\n", 6);
		exit(0);
	}
}

void	ft_fill_stack_split(char *str, t_info *s)
{
	char	**stack;

	stack = ft_split(str, ' ');
	if (!ft_num_only(stack, 2))
	{
		ft_free_split_error(str, stack, s);
		exit(0);
	}
	s->size_a = ft_numcount(str, ' ');
	s->stack_a = ft_memalloc(s->size_a);
	s->i = 0;
	while (stack[s->i])
	{
		s->stack_a[s->i] = ft_atoi(stack[s->i]);
		s->i++;
	}
	if (!ft_check_doubles(s))
	{
		ft_free_split_error(str, stack, s);
		exit(0);
	}
	ft_free_split(str, stack);
}

void	ft_free_stack(t_info *s)
{
	free(s->stack_a);
	free(s->stack_b);
	free(s);
}
