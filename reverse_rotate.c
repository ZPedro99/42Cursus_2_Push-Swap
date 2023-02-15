/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:23:49 by jomirand          #+#    #+#             */
/*   Updated: 2023/02/15 16:33:13 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(s_info *stacks, int flag)
{
	int	first;

	first = stacks->stack_a[stacks->size_a - 1];
	stacks->i = stacks->size_a -1;
	while(stacks->i > 0)
	{
		stacks->stack_a[stacks->i] = stacks->stack_a[stacks->i - 1];
		stacks->i--;
	}
	stacks->stack_a[0] = first;
	if(flag == 1)
		ft_printf("rra\n");
}

void	ft_rrb(s_info *stacks, int flag)
{
	int	first;

	first = stacks->stack_b[stacks->size_b - 1];
	stacks->i = stacks->size_b - 1;
	while(stacks->i > 0)
	{
		stacks->stack_b[stacks->i] = stacks->stack_b[stacks->i - 1];
		stacks->i--;
	}
	stacks->stack_b[0] = first;
	if(flag == 1)
		ft_printf("rrb\n");
}

void	ft_rrr(s_info *stacks)
{
	ft_rra(stacks, 0);
	ft_rrb(stacks, 0);
}