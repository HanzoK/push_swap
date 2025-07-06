/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubblesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjkim <hanjkim@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:21:10 by hanjkim           #+#    #+#             */
/*   Updated: 2024/09/08 20:27:46 by hanjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

// Bubble sort algorithm that swaps adjacent elements in stack
void	bubblesort(int *array, int size)
{
	int	index1;
	int	index2;

	index1 = 0;
	while (index1 < size - 1)
	{
		index2 = index1 + 1;
		while (index2 < size)
			(ft_swap(array, &index1, &index2), index2++);
		index1++;
	}
}
