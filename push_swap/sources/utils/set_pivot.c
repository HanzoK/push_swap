/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_pivot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjkim <hanjkim@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:17:22 by hanjkim           #+#    #+#             */
/*   Updated: 2024/09/08 20:45:24 by hanjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

//Determines pivot value for quicksort algorithm(crucial)
//Median in a stack is usually chosen as the pivot
int	set_pivot(int *stack, int *pivot, int size)
{
	int	index;
	int	*pivot_array;

	index = 0;
	pivot_array = (int *)malloc(sizeof(int) * size);
	if (!pivot_array)
		return (0);
	while (index < size)
	{
		pivot_array[index] = stack[index];
		index++;
	}
	bubblesort(pivot_array, size);
	*pivot = pivot_array[size / 2];
	free(pivot_array);
	return (1);
}
