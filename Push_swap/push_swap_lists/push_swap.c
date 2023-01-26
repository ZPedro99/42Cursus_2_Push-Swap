/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:01:07 by jomirand          #+#    #+#             */
/*   Updated: 2023/01/25 11:23:02 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack)
{
	void	*temp;

	temp = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = temp;
}

/* int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;
	int		nb_args;

	nb_args = argc;
	if (argc <= 1)
		printf("Please insert the numbers to sort\n");
	i = 1;
	stack_a = NULL;
	stack_b = NULL;
	while (nb_args - 1 > 0)
	{
		ft_lstadd_back(&stack_a, ft_lstnew(argv[i]));
		i++;
		nb_args--;
	}
	printf("Stack A: ");
	while (stack_a)
	{
		printf("%d ", ft_atoi(stack_a->content));
		stack_a = stack_a->next;
	}
	if(stack_b == NULL)
		printf("\nStack B: Empty\n");
	swap(&stack_a);
	nb_args = argc;

	return(0);
} */