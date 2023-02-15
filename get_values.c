/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_values.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:22:14 by jomirand          #+#    #+#             */
/*   Updated: 2023/02/15 16:45:30 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_min_max_value(s_info *stacks)
{
	stacks->i = 0;
	stacks->min = stacks->stack_a[0];
	while(stacks->i < stacks->size_a)
	{
		if(stacks->min > stacks->stack_a[stacks->i])
			stacks->min = stacks->stack_a[stacks->i];
		stacks->i++;
	}
	stacks->i = 0;
	stacks->max = stacks->stack_a[0];
	while(stacks->i < stacks->size_a)
	{
		if(stacks->max < stacks->stack_a[stacks->i])
			stacks->max = stacks->stack_a[stacks->i];
		stacks->i++;
	}
}

void	ft_convert_to_idx(s_info *stacks, int *temp)
{
	stacks->i = 0;
	while (stacks->i < stacks->size_a)
	{
		stacks->j = 0;
		while (stacks->j < stacks->size_a)
		{
			if (stacks->stack_a[stacks->i] == temp[stacks->j])
			{
				stacks->stack_a[stacks->i] = stacks->j;
				break ;
			}
			stacks->j++;
		}
		stacks->i++;
	}
}

void	ft_median_and_index(s_info *stacks)
{
	int	*temp;
	int	temp_num;

	temp = ft_memalloc(stacks->size_a);
	temp = ft_memcpy(temp, stacks->stack_a, sizeof(int) * stacks->size_a);
	stacks->i = 0;
	while(stacks->i < (stacks->size_a - 1))
	{
		if(temp[stacks->i] > temp[stacks->i + 1])
		{
			temp_num = temp[stacks->i];
			temp[stacks->i] = temp[stacks->i + 1];
			temp[stacks->i + 1] = temp_num;
			stacks->i = 0;
		}
		else
			stacks->i++;
	}
	stacks->med = (stacks->size_a / 2);
	ft_convert_to_idx(stacks, temp);
	free(temp);
}
