/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjkim <hanjkim@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:35:29 by hanjkim           #+#    #+#             */
/*   Updated: 2024/09/08 20:38:28 by hanjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

void	sort_two_b(t_stack *stack)
{
	if (stack->b[0] < stack->b[1])
		swap_b(stack);
	push_a(stack);
	push_a(stack);
}

// Handle push and swap for sorting 3 elements in stack b
void	push_and_swap_b(t_stack *stack, int *size)
{
	if ((*size == 3 || *size == 2) && stack->b[0] < stack->b[1])
		swap_b(stack);
	else if (*size == 1 && stack->a[0] > stack->a[1])
		swap_a(stack);
	else
	{
		push_a(stack);
		(*size)--;
	}
}

// Sort 3 elements in stack b
void	sort_three_b(t_stack *stack)
{
	int	size;

	size = 3;
	while (size > 0)
		push_and_swap_b(stack, &size);
}

// Function to sort 3 or 2 elements in stack b
void	sort_3_b(t_stack *stack, int size)
{
	if (size == 1)
		push_a(stack);
	else if (size == 2)
		sort_two_b(stack);
	else if (size == 3)
		sort_three_b(stack);
}
