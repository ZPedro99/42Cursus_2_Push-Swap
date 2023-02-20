/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:01:57 by jomirand          #+#    #+#             */
/*   Updated: 2023/02/20 12:01:16 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

typedef struct t_stack
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
	int		max_bits;
}				t_info;

//swap
void	ft_sa(t_info *stacks, int flag);
void	ft_sb(t_info *stacks, int flag);
void	ft_ss(t_info *stacks);
//rotate
void	ft_ra(t_info *stacks, int flag);
void	ft_rb(t_info *stacks, int flag);
void	ft_rr(t_info *stacks);
//reverse_rotate
void	ft_rra(t_info *stacks, int flag);
void	ft_rrb(t_info *stacks, int flag);
void	ft_rrr(t_info *stacks);
//push
void	ft_pb(t_info *stacks);
void	ft_pa(t_info *stacks);
//stack_generator
void	ft_fill_stack(int argc, char **argv, t_info *stacks);
void	ft_fill_stack_split(char *str, t_info *stacks);
void	ft_free_stack(t_info *s);
//get_values
void	ft_min_max_value(t_info *stacks);
void	ft_median_and_index(t_info *stacks);
void	ft_convert_to_idx(t_info *stacks, int *temp);
//utils
void	ft_struct_initialize(t_info *stacks);
int		*ft_memalloc(int size);
int		ft_numcount(char *s, char c);
long	ft_atol(const char *str);
int		ft_num_only(char **stack, int flag);
//utils2
void	ft_free_split(char *str, char **stack);
int		ft_check_doubles(t_info *stacks);
int		ft_sorted_stack(t_info *stack, char c);
void	ft_free_split_error(char *str, char **stack, t_info *stacks);
int		ft_abs(int num);
//printf
int		ft_printf(const char *format, ...);
int		ft_print_address(unsigned long num);
int		ft_print_char(char c);
int		ft_print_hexa(unsigned long num, char c);
int		ft_print_numbs(long num);
int		ft_print_string(char *str);
int		ft_print_unsigned(unsigned int num);
//sort
void	ft_sort2(t_info *stacks);
void	ft_sort3(t_info *stacks);
void	ft_sort5(t_info *stacks);
void	ft_sort_others(t_info *stacks);
void	ft_sort_stackb(t_info *stacks, int shift);

#endif
