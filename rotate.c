/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:15:38 by jomirand          #+#    #+#             */
/*   Updated: 2023/02/20 11:30:46 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_info *s, int flag)
{
	int	last;
	int	i;

	last = s->stack_a[0];
	i = 0;
	while (i < s->size_a - 1)
	{
		s->stack_a[i] = s->stack_a[i + 1];
		i++;
	}
	s->stack_a[i] = last;
	if (flag == 1)
		ft_printf("ra\n");
}

void	ft_rb(t_info *s, int flag)
{
	int	last;
	int	i;

	last = s->stack_b[0];
	i = 0;
	while (i < s->size_b - 1)
	{
		s->stack_b[i] = s->stack_b[i + 1];
		i++;
	}
	s->stack_b[i] = last;
	if (flag == 1)
		ft_printf("rb\n");
}

void	ft_rr(t_info *s)
{
	ft_ra(s, 0);
	ft_rb(s, 0);
}
