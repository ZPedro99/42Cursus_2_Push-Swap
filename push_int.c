/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:41:21 by jomirand          #+#    #+#             */
/*   Updated: 2023/02/02 11:32:58 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(s_info stacks)
{
	int	*temp_a;
	int	*temp_b;

	temp_a = (int *)malloc(sizeof(int) * (stacks.size_a));
	if(!temp_a)
		return ;
	temp_b = (int *)malloc(sizeof(int) * (stacks.size_b));
	if(!temp_b)
		return ;
	while(stacks.i < stacks.size_a)
		temp_a[stacks.j++] = stacks.stack_a[stacks.i++];
	stacks.i = 0;
	stacks.j = 0;
	while(stacks.i < stacks.size_b)
		temp_b[stacks.j++] = stacks.stack_b[stacks.i++];
	free(stacks.stack_a);
	free(stacks.stack_b);
	stacks.size_a -= 1;
	stacks.size_b += 1;
	stacks.stack_a = (int *)malloc(sizeof(int) * stacks.size_a);
	if(!stacks.stack_a)
		return ;
	stacks.stack_b = (int *)malloc(sizeof(int) * stacks.size_b);
	if(!stacks.stack_b)
		return ;
	stacks.stack_b[0] = temp_a[0];
	stacks.i = 0;
	stacks.j = 1;
	while(stacks.i < stacks.size_a)
		stacks.stack_a[stacks.i++] = temp_a[stacks.j++];
}
