/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjkim <hanjkim@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:19:57 by hanjkim           #+#    #+#             */
/*   Updated: 2024/09/08 20:49:41 by hanjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# define MAX_INT 2147483647
# define MIN_INT -2147483648
# define ULONG_MAX_VALUE ULONG_MAX
# define SUCCESS 1
# define FAIL 0

typedef struct s_stacks
{
	int	*a;
	int	*b;
	int	pivot;
	int	size_a;
	int	size_b;
	int	cur_size;
}	t_stack;

/*Sorting*/
int		sort_a(t_stack *stack, int cur_size, int counter, int pushed);
int		sort_b(t_stack *stack, int cur_size, int rot_count, int push_count);
int		set_pivot(int *stack, int *pivot, int size);
int		partition_a(t_stack *stack, int size, int *push_cnt, int *rot_cnt);
int		partition_b(t_stack *stack, int size, int *push_cnt, int *rot_cnt);
void	sort(t_stack *stack);
void	array_sorter(int *array, int size);
void	sort_3_a(t_stack *stack, int size);
void	sort_3_b(t_stack *stack, int size);
void	sort_3_numbers(t_stack *stack);
void	bubblesort(int *array, int size);

/*Operations*/
void	push_b(t_stack *stack);
void	push_a(t_stack *stack);
void	swap_a(t_stack *stack);
void	swap_b(t_stack *stack);
void	rotate_a(t_stack *stack);
void	rotate_b(t_stack *stack);
void	rev_rotate_a(t_stack *stack);
void	rev_rotate_b(t_stack *stack);

/*Utilities*/
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
int		ft_strlen(const char *str);
int		is_it_sorted(int *stack, int size, char stack_check);
int		push_swap_len(char **argv);
int		push_swap_atoi(char **str, int index1, t_stack *stack);
int		ft_isspace(int c);
int		paramsum(char **argv);
void	ft_swap(int *stack, int *index1, int *index2);
void	initialize_stacks(char **argv);
void	check_repeat_nums(char **str, t_stack *stack);
void	write_error(char **str, t_stack *stack);
#endif
