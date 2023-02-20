/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:12:58 by jomirand          #+#    #+#             */
/*   Updated: 2023/02/20 13:12:18 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort2(t_info *s)
{
	if (s->stack_a[0] > s->stack_a[1])
		ft_sa(s, 1);
}

int	main(int argc, char **argv)
{
	t_info	*s;

	s = (t_info *)malloc(sizeof(t_info));
	ft_struct_initialize(s);
	s->size_a = argc - 1;
	if (argc < 2)
		return (0);
	if (argc == 2)
		ft_fill_stack_split(argv[1], s);
	else
		ft_fill_stack(argc, argv, s);
	if (ft_sorted_stack(s, 'a'))
	{
		free(s);
		exit(0);
	}
	if (s->size_a == 2)
		ft_sort2(s);
	else if (s->size_a == 3)
		ft_sort3(s);
	else if (s->size_a == 5)
		ft_sort5(s);
	else if (!ft_sorted_stack(s, 'a'))
		ft_sort_others(s);
	ft_free_stack(s);
}
