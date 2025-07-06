/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_it_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjkim <hanjkim@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:12:26 by hanjkim           #+#    #+#             */
/*   Updated: 2024/09/08 20:42:29 by hanjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

//Check A for sort state in ascending order
//Or check B fort sort state in descending order (due to recursion)
int	is_it_sorted(int *stack, int size, char check_stack)
{
	int	index;

	index = 0;
	if (check_stack == 'A')
	{
		while (index < size - 1)
		{
			if (!(stack[index] < stack[index + 1]))
				return (FAIL);
			index++;
		}
	}
	else if (check_stack == 'B')
	{
		while (index < size - 1)
		{
			if (!(stack[index] > stack[index + 1]))
				return (FAIL);
			index++;
		}
	}
	return (SUCCESS);
}
