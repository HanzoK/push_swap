/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjkim <hanjkim@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:42:30 by hanjkim           #+#    #+#             */
/*   Updated: 2024/09/08 18:41:47 by hanjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

void	rotate_a(t_stack *stack)
{
	int	temp;
	int	index;

	temp = stack->a[0];
	index = 0;
	while (index < stack->size_a - 1)
	{
		stack->a[index] = stack->a[index + 1];
		index++;
	}
	stack->a[index] = temp;
	write(1, "ra\n", 3);
}

void	rotate_b(t_stack *stack)
{
	int	temp;
	int	index;

	temp = stack->b[0];
	index = 0;
	while (index < stack->size_b - 1)
	{
		stack->b[index] = stack->b[index + 1];
		index++;
	}
	stack->b[index] = temp;
	write(1, "rb\n", 3);
}
