/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:23:49 by jomirand          #+#    #+#             */
/*   Updated: 2023/02/20 11:30:49 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_info *s, int flag)
{
	int	first;

	first = s->stack_a[s->size_a - 1];
	s->i = s->size_a -1;
	while (s->i > 0)
	{
		s->stack_a[s->i] = s->stack_a[s->i - 1];
		s->i--;
	}
	s->stack_a[0] = first;
	if (flag == 1)
		ft_printf("rra\n");
}

void	ft_rrb(t_info *s, int flag)
{
	int	first;

	first = s->stack_b[s->size_b - 1];
	s->i = s->size_b - 1;
	while (s->i > 0)
	{
		s->stack_b[s->i] = s->stack_b[s->i - 1];
		s->i--;
	}
	s->stack_b[0] = first;
	if (flag == 1)
		ft_printf("rrb\n");
}

void	ft_rrr(t_info *s)
{
	ft_rra(s, 0);
	ft_rrb(s, 0);
}
