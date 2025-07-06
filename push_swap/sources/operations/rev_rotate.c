/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjkim <hanjkim@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:42:59 by hanjkim           #+#    #+#             */
/*   Updated: 2024/09/08 18:40:56 by hanjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

void	rev_rotate_a(t_stack *stack)
{
	int	temp;
	int	index;

	index = stack->size_a - 1;
	temp = stack->a[index];
	while (index != 0)
	{
		stack->a[index] = stack->a[index - 1];
		index--;
	}
	stack->a[0] = temp;
	write(1, "rra\n", 4);
}

void	rev_rotate_b(t_stack *stack)
{
	int	temp;
	int	index;

	index = stack->size_b - 1;
	temp = stack->b[index];
	while (index != 0)
	{
		stack->b[index] = stack->b[index - 1];
		index--;
	}
	stack->b[0] = temp;
	write(1, "rrb\n", 4);
}
