# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hanjkim <hanjkim@student.42vienna.com      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/02 15:06:00 by hanjkim           #+#    #+#              #
#    Updated: 2024/09/08 20:47:53 by hanjkim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

CC			= cc

CFLAGS		= -Wall -Wextra -Werror

SRCS		= 	main.c									\
				sources/algorithms/bubblesort.c			\
				sources/algorithms/quicksort.c			\
				sources/algorithms/sort_3_numbers.c		\
				sources/algorithms/partitioning.c		\
				sources/algorithms/sort_3_a.c			\
				sources/algorithms/sort_3_b.c			\
				sources/operations/push.c				\
				sources/operations/swap.c				\
				sources/operations/rotate.c				\
				sources/operations/rev_rotate.c			\
				sources/utils/set_pivot.c				\
				sources/utils/ft_write_error.c			\
				sources/utils/is_it_sorted.c			\
				sources/utils/push_swap_len.c			\
				sources/utils/push_swap_atoi.c			\
				sources/utils/param_utils.c				\
				sources/utils/init_utils.c				\
				sources/libft_utils/ft_isspace.c		\
				sources/libft_utils/ft_strlen.c			\
				sources/libft_utils/ft_swap.c			\
				sources/libft_utils/ft_substr.c			\
				sources/libft_utils/ft_split.c			\

OBJS		= ${SRCS:.c=.o}

RM			= rm -rf

all:	$(NAME)

$(NAME)	: $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
		$(RM) ${OBJS}

fclean:	clean
		$(RM) $(NAME)

re: 	fclean all

.PHONY:	all clean fclean re
