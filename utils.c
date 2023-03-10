/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:21:56 by jomirand          #+#    #+#             */
/*   Updated: 2023/02/20 13:44:32 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_struct_initialize(t_info *s)
{
	s->size_a = 0;
	s->size_b = 0;
	s->stack_a = 0;
	s->stack_b = 0;
	s->i = 0;
	s->j = 0;
	s->max = 0;
	s->min = 0;
	s->med = 0;
}

int	*ft_memalloc(int size)
{
	int	*alloc;

	alloc = (int *)malloc(sizeof(int) * size);
	if (!alloc)
		exit (1);
	return (alloc);
}

int	ft_numcount(char *s, char c)
{
	int	i;
	int	numcount;

	i = 0;
	numcount = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			numcount++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (numcount);
}

int	ft_num_only(char **stack, int flag)
{
	int	i;
	int	j;

	if (flag == 1)
		i = 1;
	else
		i = 0;
	j = 0;
	while (stack[i])
	{
		while (stack[i][j])
		{
			if (j == 0)
				if (stack[i][j] == '-')
					j++;
			if ((stack[i][j] < '0' || stack[i][j] > '9'))
				return (0);
			j++;
		}
		if (ft_atol(stack[i]) > INT_MAX || ft_atol(stack[i]) < INT_MIN)
			return (0);
		j = 0;
		i++;
	}
	return (1);
}

long	ft_atol(const char *str)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(((int)*str)))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
