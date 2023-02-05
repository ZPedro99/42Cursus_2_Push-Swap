/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:01:57 by jomirand          #+#    #+#             */
/*   Updated: 2023/01/30 11:30:17 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	int		*stack_a;
	int		*stack_b;
	int		size_a;
	int		size_b;
	int		i;
	int		j;
}				s_info;

void	ft_sa(s_info stacks);
void	ft_sb(s_info stacks);
void	ft_ss(s_info stacks);
void	ft_ra(s_info stacks);
void	ft_rb(s_info stacks);
void	ft_rr(s_info stacks);
void	ft_rra(s_info stacks);
void	ft_rrb(s_info stacks);
void	ft_rrr(s_info stacks);
void	ft_pb(s_info stacks);
int		ft_printf(const char *format, ...);
int		ft_print_address(unsigned long num);
int		ft_print_char(char c);
int		ft_print_hexa(unsigned long num, char c);
int		ft_print_numbs(long num);
int		ft_print_string(char *str);
int		ft_print_unsigned(unsigned int num);

#endif
