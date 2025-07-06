/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjkim <hanjkim@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:36:46 by hanjkim           #+#    #+#             */
/*   Updated: 2024/09/08 20:37:10 by hanjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

//After partitioning b, reverses operations in b with the count
int	reverse_and_sort_b(t_stack *stack, int cur_size, int push_count)
{
	int	rot_c_copy;
	int	push_c_copy;
	int	a_sort;
	int	b_sort;

	rot_c_copy = 0;
	push_c_copy = 0;
	a_sort = sort_a(stack, cur_size - push_count, rot_c_copy, push_c_copy);
	if (a_sort == FAIL)
		return (FAIL);
	b_sort = sort_b(stack, push_count, rot_c_copy, push_c_copy);
	if (b_sort == FAIL)
		return (FAIL);
	return (SUCCESS);
}

//Sort A via recursion and keeps count of rotates and push
//to reverse the operations done (because of recursion)
int	sort_a(t_stack *stack, int cur_size, int rot_count, int push_count)
{
	if (is_it_sorted(stack->a, cur_size, 'A') == SUCCESS)
		return (SUCCESS);
	if (cur_size <= 3)
	{
		sort_3_a(stack, cur_size);
		return (SUCCESS);
	}
	if (!partition_a(stack, cur_size, &push_count, &rot_count))
		return (FAIL);
	while (rot_count && cur_size < stack->size_a)
		(rev_rotate_a(stack), rot_count--);
	return (reverse_and_sort_b(stack, cur_size, push_count));
}

int	reverse_and_sort_a(t_stack *stack, int cur_size, int push_count)
{
	int	rot_c_copy;
	int	push_c_copy;
	int	a_sort;
	int	b_sort;

	rot_c_copy = 0;
	push_c_copy = 0;
	a_sort = sort_a(stack, push_count, rot_c_copy, push_c_copy);
	if (a_sort == FAIL)
		return (FAIL);
	b_sort = sort_b(stack, cur_size - push_count, rot_c_copy, push_c_copy);
	if (b_sort == FAIL)
		return (FAIL);
	return (SUCCESS);
}

//Sort B via recursion and keeps count of rotates and push
//to reverse the operations done (because of recursion)
int	sort_b(t_stack *stack, int cur_size, int rot_count, int push_count)
{
	if (is_it_sorted(stack->b, cur_size, 'B') == SUCCESS)
	{
		while (cur_size)
			(push_a(stack), cur_size--);
		return (SUCCESS);
	}
	if (cur_size <= 3)
	{
		sort_3_b(stack, cur_size);
		return (SUCCESS);
	}
	if (partition_b(stack, cur_size, &push_count, &rot_count) == FAIL)
		return (FAIL);
	while (rot_count)
		(rev_rotate_b(stack), rot_count--);
	return (reverse_and_sort_a(stack, cur_size, push_count));
}
