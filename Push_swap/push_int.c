/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:41:21 by jomirand          #+#    #+#             */
/*   Updated: 2023/01/26 15:04:37 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(s_info stacks)
{
	int	*temp_a;
	int	*temp_b;
	int	temp_num;

	if(stacks.size_a == 0)
		return ;
	temp_a = (int *)malloc(sizeof(int) * (stacks.size_a - 1));
	temp_b = (int *)malloc(sizeof(int) * (stacks.size_b + 1));
	temp_num = stacks.stack_a[0];
	while(stacks.i < (stacks.size_a - 1))
	{
		temp_a[stacks.i] = stacks.stack_a[stacks.i + 1];
		stacks.i++;
	}
	stacks.stack_b[0] = temp_num;
	if(stacks.size_b < 0)
	{
		while(stacks.j < stacks.size_b + 1)
		{
			if(!(temp_b[1]))
				break ;
			stacks.stack_b[stacks.j + 1] = stacks.stack_b[stacks.j];
			stacks.j++;
		}
	}
}