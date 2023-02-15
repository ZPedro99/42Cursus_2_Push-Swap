/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:45:55 by jomirand          #+#    #+#             */
/*   Updated: 2023/02/15 16:43:24 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_split(char *str, char **stack)
{
	int	i;
	int	s;

	i = 0;
	s = ft_numcount(str, ' ');
	while(i < s)
	{
		free(stack[i]);
		i++;
	}
	free(stack);
}

int	ft_check_doubles(s_info *stacks)
{
	int	i;
	int	j;

	i = 0;
	while(i < (stacks->size_a - 1))
	{
		j = i + 1;
		while(stacks->stack_a[j] < (stacks->size_a - 1))
		{
			if(stacks->stack_a[i] == stacks->stack_a[j])
				return(0);
			j++;
		}
		i++;
	}
	return(1);
}

int	ft_sorted_stack(s_info *stacks)
{
	int	i;

	i = 0;
	while(i < (stacks->size_a - 1))
	{
		if(stacks->stack_a[i] > stacks->stack_a[i + 1])
			return(0);
		i++;
	}
	return(1);
}

void	ft_free_split_error(char *str, char **stack, s_info *stacks)
{
	int	i;
	int	t;

	i = 0;
	t = ft_numcount(str, ' ');
	while(i < t)
	{
		free(stack[i]);
		i++;
	}
	free(stack);
	free(stacks->stack_a);
	free(stacks);
	write(2, "Error\n", 6);
}