/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:44:13 by jomirand          #+#    #+#             */
/*   Updated: 2023/02/15 16:33:40 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(s_info *stacks, int flag)
{
	int	temp;

	if(stacks->size_a <= 1)
		return ;
	temp = stacks->stack_a[0];
	stacks->stack_a[0] = stacks->stack_a[1];
	stacks->stack_a[1] = temp;
	if(flag == 1)
		ft_printf("sa\n");
}

void	ft_sb(s_info *stacks, int flag)
{
	int	temp;

	if(stacks->size_b <= 1)
		return ;
	temp = stacks->stack_b[0];
	stacks->stack_b[0] = stacks->stack_b[1];
	stacks->stack_b[1] = temp;
	if(flag == 1)
		ft_printf("sb\n");
}

void	ft_ss(s_info *stacks)
{
	ft_sa(stacks, 0);
	ft_sb(stacks, 0);
	ft_printf("ss\n");
}