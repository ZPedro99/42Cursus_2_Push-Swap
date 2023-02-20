/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:41:21 by jomirand          #+#    #+#             */
/*   Updated: 2023/02/20 11:28:03 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_info *s)
{
	int	*temp_a;
	int	*temp_b;

	ft_printf("pb\n");
	if (s->size_a < 1)
		return ;
	temp_a = ft_memalloc(s->size_a);
	temp_b = ft_memalloc(s->size_b);
	temp_a = ft_memcpy(temp_a, s->stack_a, sizeof(int) * s->size_a);
	temp_b = ft_memcpy(temp_b, s->stack_b, sizeof(int) * s->size_b);
	free(s->stack_a);
	free(s->stack_b);
	s->size_a -= 1;
	s->size_b += 1;
	s->stack_a = ft_memalloc(s->size_a);
	s->stack_b = ft_memalloc(s->size_b);
	s->stack_a = ft_memcpy(s->stack_a, temp_a + 1, sizeof(int) * s->size_a);
	s->i = 1;
	s->j = 0;
	s->stack_b[0] = temp_a[0];
	while (s->i < s->size_b)
		s->stack_b[s->i++] = temp_b[s->j++];
	free(temp_a);
	free(temp_b);
}

void	ft_pa(t_info *s)
{
	int	*temp_a;
	int	*temp_b;

	ft_printf("pa\n");
	if (s->size_b < 1)
		return ;
	temp_a = ft_memalloc(s->size_a);
	temp_b = ft_memalloc(s->size_b);
	temp_a = ft_memcpy(temp_a, s->stack_a, sizeof(int) * s->size_a);
	temp_b = ft_memcpy(temp_b, s->stack_b, sizeof(int) * s->size_b);
	free(s->stack_a);
	free(s->stack_b);
	s->size_a += 1;
	s->size_b -= 1;
	s->stack_a = ft_memalloc(s->size_a);
	s->stack_b = ft_memalloc(s->size_b);
	s->stack_b = ft_memcpy(s->stack_b, temp_b + 1, sizeof(int) * s->size_b);
	s->i = 1;
	s->j = 0;
	s->stack_a[0] = temp_b[0];
	while (s->i < s->size_a)
		s->stack_a[s->i++] = temp_a[s->j++];
	free(temp_a);
	free(temp_b);
}
