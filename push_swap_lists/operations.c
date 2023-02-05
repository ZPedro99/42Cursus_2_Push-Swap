/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:20:13 by jomirand          #+#    #+#             */
/*   Updated: 2023/01/25 10:15:56 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list **stack)
{
	void	*temp;

	temp = (*stack)->content;
	(*stack)->content = ((*stack)->next)->content;
	((*stack)->next)->content = temp;
}
