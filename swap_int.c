/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:44:13 by jomirand          #+#    #+#             */
/*   Updated: 2023/01/26 14:20:56 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(s_info stacks)
{
	int	temp;

	if(stacks.size_a <= 1)
		return ;
	temp = stacks.stack_a[0];
	stacks.stack_a[0] = stacks.stack_a[1];
	stacks.stack_a[1] = temp;
}

void	ft_sb(s_info stacks)
{
	int	temp;

	if(stacks.size_b <= 1)
		return ;
	temp = stacks.stack_b[0];
	stacks.stack_b[0] = stacks.stack_b[1];
	stacks.stack_b[1] = temp;
}

void	ft_ss(s_info stacks)
{
	ft_sa(stacks);
	ft_sb(stacks);
}