/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:01:57 by jomirand          #+#    #+#             */
/*   Updated: 2023/02/15 16:31:07 by jomirand         ###   ########.fr       */
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
	int		max;
	int		min;
	int		med;
}				s_info;

//operations
void	ft_sa(s_info *stacks, int flag);
void	ft_sb(s_info *stacks, int flag);
void	ft_ss(s_info *stacks);
void	ft_ra(s_info *stacks, int flag);
void	ft_rb(s_info *stacks, int flag);
void	ft_rr(s_info *stacks);
void	ft_rra(s_info *stacks, int flag);
void	ft_rrb(s_info *stacks, int flag);
void	ft_rrr(s_info *stacks);
void	ft_pb(s_info *stacks);
void	ft_pa(s_info *stacks);
//get_stack
void	ft_fill_stack(int argc, char **argv, s_info *stacks);
void	ft_fill_stack_split(char *str, s_info *stacks);
//get_values
void	ft_min_max_value(s_info *stacks);
void	ft_median_and_index(s_info *stacks);
void	ft_convert_to_idx(s_info *stacks, int *temp);
//utils
void	ft_struct_initialize(s_info *stacks);
int		*ft_memalloc(int size);
int		ft_numcount(char *s, char c);
long	ft_atol(const char *str);
int		ft_num_only(char **stack, int flag);
//utils2
void	ft_free_split(char *str, char **stack);
int		ft_check_doubles(s_info *stacks);
int		ft_sorted_stack(s_info *stacks);
void	ft_free_split_error(char *str, char **stack, s_info *stacks);
//printf
int		ft_printf(const char *format, ...);
int		ft_print_address(unsigned long num);
int		ft_print_char(char c);
int		ft_print_hexa(unsigned long num, char c);
int		ft_print_numbs(long num);
int		ft_print_string(char *str);
int		ft_print_unsigned(unsigned int num);
//sort
void	ft_sort2(s_info *stacks);
void	ft_sort3(s_info *stacks);
void	ft_sort5(s_info *stacks);
void	ft_sort_others(s_info *stacks);

#endif
