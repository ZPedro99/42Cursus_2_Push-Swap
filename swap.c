/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:44:13 by jomirand          #+#    #+#             */
/*   Updated: 2023/02/20 11:30:44 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_info *s, int flag)
{
	int	temp;

	if (s->size_a <= 1)
		return ;
	temp = s->stack_a[0];
	s->stack_a[0] = s->stack_a[1];
	s->stack_a[1] = temp;
	if (flag == 1)
		ft_printf("sa\n");
}

void	ft_sb(t_info *s, int flag)
{
	int	temp;

	if (s->size_b <= 1)
		return ;
	temp = s->stack_b[0];
	s->stack_b[0] = s->stack_b[1];
	s->stack_b[1] = temp;
	if (flag == 1)
		ft_printf("sb\n");
}

void	ft_ss(t_info *s)
{
	ft_sa(s, 0);
	ft_sb(s, 0);
	ft_printf("ss\n");
}
