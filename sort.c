/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:45:28 by jomirand          #+#    #+#             */
/*   Updated: 2023/02/20 11:39:01 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort3(t_info *s)
{
	ft_min_max_value(s);
	if (s->stack_a[1] == s->min && s->stack_a[2] == s->max)
		ft_sa(s, 1);
	else if (s->stack_a[0] == s->max && s->stack_a[2] == s->min)
	{
		ft_sa(s, 1);
		ft_rra(s, 1);
	}
	else if (s->stack_a[0] == s->max && s->stack_a[1] == s->min)
		ft_ra(s, 1);
	else if (s->stack_a[0] == s->min && s->stack_a[1] == s->max)
	{
		ft_sa(s, 1);
		ft_ra(s, 1);
	}
	else if (s->stack_a[1] == s->max && s->stack_a[2] == s->min)
		ft_rra(s, 1);
}

void	ft_final_moves(t_info *s)
{
	if (s->stack_b[0] > s->stack_b[1])
	{
		ft_pa(s);
		ft_ra(s, 1);
		ft_pa(s);
	}
	else
	{
		ft_pa(s);
		ft_pa(s);
		ft_ra(s, 1);
	}
}

void	ft_sort5(t_info *s)
{
	ft_min_max_value(s);
	while (s->size_a != 3)
	{
		if (s->stack_a[0] == s->max || s->stack_a[0] == s->min)
			ft_pb(s);
		else
		{
			if ((s->stack_a[1] == s->max || s->stack_a[1] == s->min)
				|| s->stack_a[2] == s->max || s->stack_a[2] == s->min)
				ft_ra(s, 1);
			else
				ft_rra(s, 1);
		}
	}
	ft_sort3(s);
	ft_final_moves(s);
}

void	ft_sort_others(t_info *s)
{
	int	size_a;
	int	max_bits;

	max_bits = 0;
	ft_min_max_value(s);
	ft_median_and_index(s);
	s->i = 0;
	while ((s->max >> max_bits) != 0)
		max_bits++;
	while (s->i <= max_bits && (!ft_sorted_stack(s, 'a') && s->size_a))
	{
		size_a = s->size_a;
		s->j = 0;
		while (s->j < size_a && (!ft_sorted_stack(s, 'a') && s->size_a))
		{
			if (((s->stack_a[0] >> s->i) & 1) == 0)
				ft_pb(s);
			else
				ft_ra(s, 1);
			s->j++;
		}
		ft_sort_stackb(s, s->i);
		s->i++;
	}
}

void	ft_sort_stackb(t_info *s, int shift)
{
	int	i;
	int	size;

	if (ft_sorted_stack(s, 'b') && (ft_sorted_stack(s, 'a')))
	{
		while (s->size_b > 0)
			ft_pa(s);
		return ;
	}
	size = s->size_b;
	i = 0;
	while (i < size && s->size_b)
	{
		if ((s->stack_b[0] & (1 << (shift + 1))) == 0)
			ft_rb(s, 1);
		else
			ft_pa(s);
		i++;
	}
}
