/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:45:55 by jomirand          #+#    #+#             */
/*   Updated: 2023/02/20 14:32:00 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_split(char *str, char **stack)
{
	int	i;
	int	s;

	i = 0;
	s = ft_numcount(str, ' ');
	while (i < s)
	{
		free(stack[i]);
		i++;
	}
	free(stack);
}

int	ft_check_doubles(t_info *s)
{
	int	i;
	int	j;

	i = 0;
	while (i < (s->size_a - 1))
	{
		j = i + 1;
		while (j < s->size_a)
		{
			if (s->stack_a[i] == s->stack_a[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_sorted_stack(t_info *s, char c)
{
	int	i;

	i = 0;
	if (c == 'a')
	{
		while (i < (s->size_a - 1))
		{
			if (s->stack_a[i] > s->stack_a[i + 1] && c == 'a')
				return (0);
			i++;
		}
		return (1);
	}
	else
	{
		while (i < (s->size_b - 1))
		{
			if (s->stack_b[i] < s->stack_b[i + 1] && c == 'b')
				return (0);
			i++;
		}
		return (1);
	}
	return (0);
}

void	ft_free_split_error(char *str, char **stack, t_info *s)
{
	int	i;
	int	t;

	i = 0;
	t = ft_numcount(str, ' ');
	while (i < t)
	{
		free(stack[i]);
		i++;
	}
	free(stack);
	free(s->stack_a);
	free(s);
	write(2, "Error\n", 6);
}

int	ft_abs(int num)
{
	if (num < 0)
		return (-num);
	return (num);
}
