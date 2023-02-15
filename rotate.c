/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:15:38 by jomirand          #+#    #+#             */
/*   Updated: 2023/02/15 16:33:27 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(s_info *stacks, int flag)
{
	int	last;
	int	i;
	last = stacks->stack_a[0];
	i = 0;
	while(i < stacks->size_a - 1)
	{
		stacks->stack_a[i] = stacks->stack_a[i + 1];
		i++;
	}
	stacks->stack_a[i] = last;
	if(flag == 1)
		ft_printf("ra\n");
}

void	ft_rb(s_info *stacks, int flag)
{
	int	last;
	int	i;

	last = stacks->stack_b[0];
	i = 0;
	while(i < stacks->size_b - 1)
	{
		stacks->stack_b[i] = stacks->stack_b[i + 1];
		i++;
	}
	stacks->stack_b[i] = last;
	if(flag == 1)
		ft_printf("rb\n");
}

void	ft_rr(s_info *stacks)
{
	ft_ra(stacks, 0);
	ft_rb(stacks, 0);
}