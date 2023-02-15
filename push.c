/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:41:21 by jomirand          #+#    #+#             */
/*   Updated: 2023/02/15 14:36:06 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(s_info *stacks)
{
	int	*temp_a;
	int	*temp_b;
	ft_printf("pb\n");
	if(stacks->size_a < 1)
		return ;
	temp_a = ft_memalloc(stacks->size_a);
	temp_b = ft_memalloc(stacks->size_b);
	temp_a = ft_memcpy(temp_a, stacks->stack_a, sizeof(int) * stacks->size_a);
	temp_b = ft_memcpy(temp_b, stacks->stack_b, sizeof(int) * stacks->size_b);
	free(stacks->stack_a);
	free(stacks->stack_b);
	stacks->size_a -= 1;
	stacks->size_b += 1;
	stacks->stack_a = ft_memalloc(stacks->size_a);
	stacks->stack_b = ft_memalloc(stacks->size_b);
	stacks->stack_a = ft_memcpy(stacks->stack_a, temp_a + 1, sizeof(int) * stacks->size_a);
	stacks->i = 1;
	stacks->j = 0;
	stacks->stack_b[0] = temp_a[0];
	while(stacks->i < stacks->size_b)
		stacks->stack_b[stacks->i++] = temp_b[stacks->j++];
	free(temp_a);
	free(temp_b);
}

void	ft_pa(s_info *stacks)
{
	int	*temp_a;
	int	*temp_b;
	ft_printf("pa\n");
	if(stacks->size_b < 1)
		return ;
	temp_a = ft_memalloc(stacks->size_a);
	temp_b = ft_memalloc(stacks->size_b);
	temp_a = ft_memcpy(temp_a, stacks->stack_a, sizeof(int) * stacks->size_a);
	temp_b = ft_memcpy(temp_b, stacks->stack_b, sizeof(int) * stacks->size_b);
	free(stacks->stack_a);
	free(stacks->stack_b);
	stacks->size_a += 1;
	stacks->size_b -= 1;
	stacks->stack_a = ft_memalloc(stacks->size_a);
	stacks->stack_b = ft_memalloc(stacks->size_b);
	stacks->stack_b = ft_memcpy(stacks->stack_b, temp_b + 1, sizeof(int) * stacks->size_b);
	stacks->i = 1;
	stacks->j = 0;
	stacks->stack_a[0] = temp_b[0];
	while(stacks->i < stacks->size_a)
		stacks->stack_a[stacks->i++] = temp_a[stacks->j++];
	free(temp_a);
	free(temp_b);
}
