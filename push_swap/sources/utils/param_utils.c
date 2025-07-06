/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   param_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjkim <hanjkim@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:24:33 by hanjkim           #+#    #+#             */
/*   Updated: 2024/09/08 20:43:16 by hanjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

//Counts the number of arguments passed in argv to get size of input
int	paramsum(char **argv)
{
	int	count;
	int	index;

	count = 0;
	index = 0;
	while (1)
	{
		if (argv[count] == 0)
			break ;
		else if (argv[0][index])
			count++;
		else if (argv[0][index] == '\0')
			index++;
	}
	return (count);
}

//Check for any repeat numbers in A before sorting
void	check_repeat_nums(char **argv, t_stack *stack)
{
	int	index1;
	int	index2;

	index1 = 0;
	while (index1 < stack->cur_size - 1)
	{
		index2 = index1 + 1;
		while (index2 < stack->cur_size)
		{
			if (stack->a[index1] == stack->a[index2])
				write_error(argv, stack);
			index2++;
		}
		index1++;
	}
}
