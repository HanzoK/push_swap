/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjkim <hanjkim@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:07:16 by hanjkim           #+#    #+#             */
/*   Updated: 2024/09/08 20:44:45 by hanjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

//Get length of argvs
int	push_swap_len(char **argv)
{
	int	index;

	if (argv == 0)
		return (FAIL);
	index = 0;
	while (argv[index] != 0)
		index++;
	return (index);
}
