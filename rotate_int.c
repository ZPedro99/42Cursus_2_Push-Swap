/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:15:38 by jomirand          #+#    #+#             */
/*   Updated: 2023/01/26 11:34:06 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(s_info stacks)
{
	int	last;

	last = stacks.stack_a[0];
	while(stacks.i < stacks.size_a - 1)
	{
		stacks.stack_a[stacks.i] = stacks.stack_a[stacks.i + 1];
		stacks.i++;
	}
	stacks.stack_a[stacks.i] = last;
}

void	ft_rb(s_info stacks)
{
	int	last;

	last = stacks.stack_b[0];
	while(stacks.i < stacks.size_b - 1)
	{
		stacks.stack_b[stacks.i] = stacks.stack_b[stacks.i + 1];
		stacks.i++;
	}
	stacks.stack_b[stacks.i] = last;
}

void	ft_rr(s_info stacks)
{
	ft_ra(stacks);
	ft_rb(stacks);
}