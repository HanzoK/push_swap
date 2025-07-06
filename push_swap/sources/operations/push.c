/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjkim <hanjkim@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:40:45 by hanjkim           #+#    #+#             */
/*   Updated: 2024/09/08 18:57:44 by hanjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

void	push_a(t_stack *stack)
{
	int	index;

	if (stack->size_b)
	{
		stack->size_a++;
		index = stack->size_a - 1;
		while (index > 0)
		{
			stack->a[index] = stack->a[index - 1];
			index--;
		}
		stack->a[0] = stack->b[0];
		stack->size_b--;
		index = 0;
		while (index < stack->size_b)
		{
			(stack->b[index] = stack->b[index + 1]);
			index++;
		}
		write(1, "pa\n", 3);
	}
	else
		return ;
}

void	push_b(t_stack *stack)
{
	int	index;

	if (stack->size_a)
	{
		stack->size_b++;
		index = stack->size_b - 1;
		while (index > 0)
		{
			stack->b[index] = stack->b[index - 1];
			index--;
		}
		stack->b[0] = stack->a[0];
		stack->size_a--;
		index = 0;
		while (index < stack->size_a)
		{
			(stack->a[index] = stack->a[index + 1]);
			index++;
		}
		write(1, "pb\n", 3);
	}
	else
		return ;
}
