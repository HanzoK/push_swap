/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjkim <hanjkim@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:33:44 by hanjkim           #+#    #+#             */
/*   Updated: 2024/09/08 20:37:57 by hanjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

void	sort_two_a(t_stack *stack)
{
	if (stack->a[0] > stack->a[1])
		swap_a(stack);
}

// Rotate and reverse rotate logic for sorting 3 elements in stack a
void	rotate_and_reverse_a(t_stack *stack, int *rot_count, int *rev_count)
{
	if (!(*rev_count) || !is_it_sorted(stack->a, 3, 'A'))
	{
		if (stack->a[0] > stack->a[1])
			swap_a(stack);
		else if (*rot_count == 0)
			(rotate_a(stack), (*rot_count) = 1);
		else
			(rev_rotate_a(stack), (*rev_count)++);
	}
}

// Sort 3 elements in stack a
void	sort_three_a(t_stack *stack)
{
	int	rot_count;
	int	rev_count;

	rot_count = 0;
	rev_count = 0;
	if (stack->a[0] > (stack->a[1] && stack->a[2])
		|| stack->a[1] > (stack->a[0] && stack->a[2]))
	{
		while (!rev_count || !is_it_sorted(stack->a, 3, 'A'))
			rotate_and_reverse_a(stack, &rot_count, &rev_count);
	}
	else if (stack->a[2] > (stack->a[0]
			&& stack->a[1]) && stack->a[0] > stack->a[1])
		swap_a(stack);
}

//function to sort 3 or 2 elements in stack a
void	sort_3_a(t_stack *stack, int size)
{
	if (size == 2)
		sort_two_a(stack);
	else if (size == 3)
		sort_three_a(stack);
}
