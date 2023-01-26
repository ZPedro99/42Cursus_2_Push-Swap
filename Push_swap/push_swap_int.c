/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:12:58 by jomirand          #+#    #+#             */
/*   Updated: 2023/01/26 15:06:54 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_struct_initialize(s_info *stacks)
{
	stacks->stack_a = 0;
	stacks->stack_b = 0;
	stacks->size_a = 0;
	stacks->size_b = 0;
	stacks->i = 0;
	stacks->j = 0;
}

int	main(int argc, char **argv)
{
	s_info	stacks;
	(void)argv;
	ft_struct_initialize(&stacks);
	stacks.stack_a = (int *)malloc(sizeof(int) * (argc - 1));
	stacks.stack_b = (int *)malloc(sizeof(int) * (argc - 1));
	stacks.size_a = argc - 1;

	if(stacks.size_a == 0)
		ft_printf(" Empty");
	while(stacks.i < stacks.size_a)
	{
		stacks.stack_a[stacks.i] = ft_atoi(argv[stacks.i + 1]);
		ft_printf("\n%d      %d", stacks.stack_a[stacks.i], stacks.stack_b[stacks.i]);
		stacks.i++;
	}
	ft_printf("\n\nA      B");
	if(stacks.stack_b == 0)
		ft_printf("\n Empty");
	stacks.i = 0;
	//ft_sa(stacks);
	//ft_ra(stacks);
	//ft_rra(stacks);
	//ft_pb(stacks);
	ft_printf("\n\n\nafter sa\n\n");
	ft_printf("Stack A:");
	while(stacks.i < stacks.size_a)
	{
		ft_printf("\n    %d", stacks.stack_a[stacks.i]);
		stacks.i++;
	}
	ft_printf("\n");
	return(0);
}