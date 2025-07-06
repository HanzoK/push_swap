/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjkim <hanjkim@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:06:44 by hanjkim           #+#    #+#             */
/*   Updated: 2024/09/08 20:39:10 by hanjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

//Hardcoded conditions for exactly 3 numbers
//to keep operation numbers at maximum of 2
void	sort_3_numbers(t_stack *stack)
{
	if (stack->a[0] > stack->a[1] && stack->a[0] < stack->a[2]
		&& stack->a[1] < stack->a[2])
		swap_a(stack);
	else if (stack->a[0] > stack->a[1] && stack->a[1] > stack->a[2])
	{
		rotate_a(stack);
		swap_a(stack);
	}
	else if (stack->a[0] > stack->a[1] && stack->a[0] > stack->a[2])
		rotate_a(stack);
	else if (stack->a[0] < stack->a[1] && stack->a[1] > stack->a[2]
		&& stack->a[0] < stack->a[2])
	{
		rev_rotate_a(stack);
		swap_a(stack);
	}
	else if (stack->a[0] < stack->a[1] && stack->a[1] > stack->a[2]
		&& stack->a[0] > stack->a[2])
		rev_rotate_a(stack);
}
