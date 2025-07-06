/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjkim <hanjkim@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:06:36 by hanjkim           #+#    #+#             */
/*   Updated: 2024/09/10 13:46:06 by hanjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

//Initiate the quicksort algorithm
//Small numbers check beforehand
void	sort(t_stack *stack)
{
	if (is_it_sorted(stack->a, stack->size_a, 'A') == FAIL)
	{
		if (stack->cur_size == 3)
			sort_3_numbers(stack);
		else if (stack->cur_size == 2)
			swap_a(stack);
		else
			sort_a(stack, stack->cur_size, 0, 0);
	}
	return ;
}

//Checking for whether the input is either a String or just numbers
int	main(int argc, char **argv)
{
	char	**split_array;
	int		index;
	int		arg_pos;

	index = 0;
	arg_pos = 1;
	if (argc > 1)
	{
		if (argc == 2)
		{
			split_array = ft_split(argv[arg_pos], ' ');
			if (split_array == FAIL)
				return (FAIL);
			initialize_stacks(split_array, 1);
			while (split_array[index])
				(free(split_array[index]), index++);
			free(split_array);
		}
		else
			initialize_stacks(&argv[arg_pos], 0);
	}
	return (0);
}
