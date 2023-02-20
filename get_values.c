/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_values.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:22:14 by jomirand          #+#    #+#             */
/*   Updated: 2023/02/20 11:30:41 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_min_max_value(t_info *s)
{
	s->i = 0;
	s->min = s->stack_a[0];
	while (s->i < s->size_a)
	{
		if (s->min > s->stack_a[s->i])
			s->min = s->stack_a[s->i];
		s->i++;
	}
	s->i = 0;
	s->max = s->stack_a[0];
	while (s->i < s->size_a)
	{
		if (s->max < s->stack_a[s->i])
			s->max = s->stack_a[s->i];
		s->i++;
	}
}

void	ft_convert_to_idx(t_info *s, int *temp)
{
	s->i = 0;
	while (s->i < s->size_a)
	{
		s->j = 0;
		while (s->j < s->size_a)
		{
			if (s->stack_a[s->i] == temp[s->j])
			{
				s->stack_a[s->i] = s->j;
				break ;
			}
			s->j++;
		}
		s->i++;
	}
}

void	ft_median_and_index(t_info *s)
{
	int	*temp;
	int	temp_num;

	temp = ft_memalloc(s->size_a);
	temp = ft_memcpy(temp, s->stack_a, sizeof(int) * s->size_a);
	s->i = 0;
	while (s->i < (s->size_a - 1))
	{
		if (temp[s->i] > temp[s->i + 1])
		{
			temp_num = temp[s->i];
			temp[s->i] = temp[s->i + 1];
			temp[s->i + 1] = temp_num;
			s->i = 0;
		}
		else
			s->i++;
	}
	s->med = (s->size_a / 2);
	ft_convert_to_idx(s, temp);
	free(temp);
}
