/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   partitioning.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjkim <hanjkim@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:09:19 by hanjkim           #+#    #+#             */
/*   Updated: 2024/09/08 20:32:49 by hanjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

//Numbers smaller than pivot are pushed to b. 
//Rotates and rev_rotates are counted to keep track during recursion
int	partition_a(t_stack *stack, int size, int *push_cnt, int *rot_cnt)
{
	int	pivot;

	if (!set_pivot(stack->a, &pivot, size))
		return (FAIL);
	stack->pivot = pivot;
	while (*push_cnt < size / 2)
	{
		if (stack->a[0] < pivot)
			(push_b(stack), (*push_cnt)++);
		else if (stack->a[stack->size_a - 1] < pivot)
		{
			(rev_rotate_a(stack), push_b(stack));
			(*push_cnt)++;
		}
		else
		{
			(rotate_a(stack));
			(*rot_cnt)++;
		}
	}
	return (SUCCESS);
}

//Nums larger than pivot are pushed to a.
//Push and rotates are counted to keep track during recursion
int	partition_b(t_stack *stack, int size, int *push_cnt, int *rot_cnt)
{
	int	pivot;

	if (!set_pivot(stack->b, &pivot, size))
		return (FAIL);
	stack->pivot = pivot;
	while ((*push_cnt) < ((size / 2) + (size % 2)))
	{
		if (stack->b[0] >= pivot)
		{
			(push_a(stack));
			(*push_cnt)++;
		}
		else
		{
			(rotate_b(stack));
			(*rot_cnt)++;
		}
	}
	return (SUCCESS);
}
