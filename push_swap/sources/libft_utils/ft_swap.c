/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjkim <hanjkim@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:40:00 by hanjkim           #+#    #+#             */
/*   Updated: 2024/09/05 18:04:19 by hanjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

void	ft_swap(int *stack, int *index1, int *index2)
{
	int	temp;

	if (stack[*index1] > stack[*index2])
	{
		temp = stack[*index1];
		stack[*index1] = stack[*index2];
		stack[*index2] = temp;
	}
}
