/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:12:58 by jomirand          #+#    #+#             */
/*   Updated: 2023/02/15 15:38:24 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort2(s_info *stacks)
{
	if(stacks->stack_a[0] > stacks->stack_a[1])
		ft_sa(stacks, 1);
}

int	main(int argc, char **argv)
{
	s_info	*stacks;

	stacks = (s_info *)malloc(sizeof(s_info));
	ft_struct_initialize(stacks);
	if(argc < 2)
		return (0);
	if(argc == 2)
		ft_fill_stack_split(argv[1], stacks);
	else
		ft_fill_stack(argc, argv, stacks);
	if(stacks->size_a == 2)
		ft_sort2(stacks);
	else if(stacks->size_a == 3)
		ft_sort3(stacks);
	else if(stacks->size_a == 5)
		ft_sort5(stacks);
	else if(!ft_sorted_stack(stacks))
		ft_sort_others(stacks);
	free(stacks->stack_a);
	free(stacks->stack_b);
	free(stacks);
	/* stacks->i = 0;
	while(stacks->i < stacks->size_a)
	{
		ft_printf("%d\n", stacks->stack_a[stacks->i]);
		stacks->i++;
	} */
}

/* int	main(int argc, char **argv)
{
	s_info	*stacks;
	(void)argv;
	stacks = (s_info *)malloc(sizeof(s_info));
	ft_struct_initialize(stacks);
	stacks->size_a = argc - 1;
	stacks->stack_a = (int *)malloc(sizeof(int) * stacks->size_a);
	stacks->stack_b = (int *)malloc(sizeof(int) * stacks->size_a);

	while(stacks->i < stacks->size_a)
	{
		stacks->stack_a[stacks->i] = ft_atoi(argv[stacks->i + 1]);
		ft_printf("\n%d", stacks->stack_a[stacks->i]);
		if(stacks->size_b > stacks->i)
			ft_printf("		%d", stacks->stack_b[stacks->i]);
		else
			ft_printf("		x");
		stacks->i++;
	}
	ft_printf("\n\nA		B\n");
	ft_pb(stacks);
	ft_pb(stacks);
	ft_pb(stacks);
	ft_pb(stacks);
	ft_pb(stacks);
	ft_pb(stacks);
	ft_ra(stacks);
	ft_rb(stacks);
	ft_rr(stacks);
	ft_rra(stacks);
	ft_rrb(stacks);
	ft_rrr(stacks);
	ft_pa(stacks);
	ft_sb(stacks);
	ft_sa(stacks);
	ft_ss(stacks);
	stacks->i = 0;
	if(stacks->size_a > stacks->size_b)
	{
		while(stacks->i < stacks->size_a)
		{
			ft_printf("\n%d", stacks->stack_a[stacks->i]);
			if(stacks->size_b > stacks->i)
				ft_printf("		%d", stacks->stack_b[stacks->i]);
			else
				ft_printf("		x");
			stacks->i++;
		}
	}
	else if(stacks->size_a < stacks->size_b)
	{
		while(stacks->i < stacks->size_b)
		{
			if(stacks->size_a > stacks->i)
				ft_printf("\n%d", stacks->stack_a[stacks->i]);
			else
				ft_printf("\nx");
			ft_printf("		%d", stacks->stack_b[stacks->i]);
			stacks->i++;
		}
	}
	else if(stacks->size_a == stacks->size_b)
		while(stacks->i < stacks->size_a)
		{
			ft_printf("\n%d		%d", stacks->stack_a[stacks->i], stacks->stack_b[stacks->i]);
			stacks->i++;
		}
	ft_printf("\n\nA		B\n");
	free(stacks->stack_a);
	free(stacks->stack_b);
	free(stacks);
	return(0);
} */

