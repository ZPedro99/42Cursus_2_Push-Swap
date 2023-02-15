/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:45:28 by jomirand          #+#    #+#             */
/*   Updated: 2023/02/15 15:26:47 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort3(s_info *stacks)
{
	ft_min_max_value(stacks);
	if(stacks->stack_a[1] == stacks->min && stacks->stack_a[2] == stacks->max)
		ft_sa(stacks, 1);
	else if(stacks->stack_a[0] == stacks->max && stacks->stack_a[2] == stacks->min)
	{
		ft_sa(stacks, 1);
		ft_rra(stacks, 1);
	}
	else if(stacks->stack_a[0] == stacks->max && stacks->stack_a[1] == stacks->min)
		ft_ra(stacks, 1);
	else if(stacks->stack_a[0] == stacks->min && stacks->stack_a[1] == stacks->max)
	{
		ft_sa(stacks, 1);
		ft_ra(stacks, 1);
	}
	else if(stacks->stack_a[1] == stacks->max && stacks->stack_a[2] == stacks->min)
		ft_rra(stacks, 1);
}

void	ft_sort5(s_info *stacks)
{
	ft_min_max_value(stacks);
	while(stacks->size_a != 3)
	{
		if(stacks->stack_a[0] == stacks->max || stacks->stack_a[0] == stacks->min)
			ft_pb(stacks);
		else
		{
			if((stacks->stack_a[1] == stacks->max || stacks->stack_a[1] == stacks->min)
				|| stacks->stack_a[2] == stacks->max || stacks->stack_a[2] == stacks->min)
				ft_ra(stacks, 1);
			else
				ft_rra(stacks, 1);
		}
	}
	ft_sort3(stacks);
	if(stacks->stack_b[0] > stacks->stack_b[1])
	{
		ft_pa(stacks);
		ft_ra(stacks, 1);
		ft_pa(stacks);
	}
	else
	{
		ft_pa(stacks);
		ft_pa(stacks);
		ft_ra(stacks, 1);
	}
}

void	ft_sort_others(s_info *stacks)
{
	int	size_b;
	int	size_a;
	int	i;
	int	j;
	int	max_bits;
	max_bits = 0;
	ft_min_max_value(stacks);
	ft_median_and_index(stacks);
	i = 0;
	while((stacks->max >> max_bits) != 0)
		max_bits++;
	while(i <= max_bits)
	{
		size_a = stacks->size_a;
		j = 0;
		while(j < size_a)
		{
			if(((stacks->stack_a[0] >> i) & 1) == 0)
				ft_pb(stacks);
			else
				ft_ra(stacks, 1);
			j++;
		}
		size_b = stacks->size_b;
		while(size_b > 0)
		{
			ft_pa(stacks);
			size_b--;
		}
		if(ft_sorted_stack(stacks))
			break;
		i++;
	}
}