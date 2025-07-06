/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjkim <hanjkim@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:42:37 by hanjkim           #+#    #+#             */
/*   Updated: 2024/09/10 13:50:40 by hanjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

//Converts arguments to ints and fills A
//Before sorting we still check for repeat numbers
void	process_stack(char **argv, t_stack *stack)
{
	int	index;

	index = 0;
	while (index < stack->cur_size)
	{
		(stack->a[index] = push_swap_atoi(argv, index, stack));
		index++;
	}
	check_repeat_nums(argv, stack);
	sort(stack);
	free(stack->a);
	free(stack->b);
}

//Initialize both A and B
void	initialize_stacks(char **argv, int is_split)
{
	t_stack	stack;
	int		size;

	size = push_swap_len(argv);
	stack.cur_size = size;
	stack.size_a = stack.cur_size;
	stack.size_b = 0;
	stack.a = (int *)malloc(sizeof(int) * size);
	stack.is_split = is_split;
	if (!stack.a)
	{
		stack.b = NULL;
		write_error(argv, &stack);
		return ;
	}
	stack.b = (int *)malloc(sizeof(int) * size);
	if (!stack.b)
	{
		write_error(argv, &stack);
		return ;
	}
	process_stack(argv, &stack);
}
