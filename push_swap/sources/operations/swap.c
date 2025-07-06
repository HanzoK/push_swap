/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjkim <hanjkim@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:41:46 by hanjkim           #+#    #+#             */
/*   Updated: 2024/09/04 18:33:31 by hanjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

void	swap_a(t_stack *stack)
{
	int	temp;

	temp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = temp;
	write(1, "sa\n", 3);
}

void	swap_b(t_stack *stack)
{
	int	temp;

	temp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = temp;
	write(1, "sb\n", 3);
}
