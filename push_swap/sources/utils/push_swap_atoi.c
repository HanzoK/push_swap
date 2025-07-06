/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_atoi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjkim <hanjkim@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:35:32 by hanjkim           #+#    #+#             */
/*   Updated: 2024/09/08 20:44:22 by hanjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../push_swap.h"

//Check for the first sign found in string (for atoi)
void	check_signs(char *str, int *index, int *sign)
{
	if (str[*index] == '+' || str[*index] == '-')
	{
		if (str[*index] == '-')
			*sign *= -1;
		(*index)++;
	}
}

//Convert string input into integers
int	push_swap_atoi(char **str, int index1, t_stack *stack)
{
	int				index2;
	unsigned long	result;
	int				sign;

	index2 = 0;
	result = 0;
	sign = 1;
	while (ft_isspace(str[index1][index2]))
		index2++;
	check_signs(str[index1], &index2, &sign);
	while (str[index1][index2])
	{
		if (str[index1][index2] < '0' || str[index1][index2] > '9')
			write_error(str, stack);
		result = result * 10 + str[index1][index2] - '0';
		index2++;
	}
	if (result > ULONG_MAX_VALUE)
		write_error(str, stack);
	if ((sign == 1 && result > MAX_INT) || (sign == -1 && result > (-MIN_INT)))
		write_error(str, stack);
	return (result * sign);
}
