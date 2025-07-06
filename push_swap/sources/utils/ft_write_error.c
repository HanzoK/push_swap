/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjkim <hanjkim@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:08:59 by hanjkim           #+#    #+#             */
/*   Updated: 2024/09/10 13:50:49 by hanjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

//Handles errors by freeing memory and writing error then exits
//Also handles cleanup of every memory allocated in stack and heap
void	write_error(char **argv, t_stack *stack, int is_split)
{
//	extern char	**__environ;
	int			index;
//	size_t		result;

	if (stack)
		(free(stack->a), free(stack->b));
	if (!stack->is_split)
		(write(2, "Error\n", 6), exit (1));
	index = 0;
//	result = (size_t)(__environ - argv - paramsum(argv));
	/*if (argv && argv[index] && result != 1)
	{
		while (argv && argv[index])
		{
			free(argv[index]);
			index++;
		}
		free(argv);
	}*/
	while (argv && argv[index])
	{
		free(argv[index]);
		index++;
	}
	free(argv);
	(write(2, "Error\n", 6), exit (1));
}
