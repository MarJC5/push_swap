/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:18:21 by jmartin           #+#    #+#             */
/*   Updated: 2022/02/15 08:09:19 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define WRONG_ARGS_ERROR	"Wrong number of arguments, please enter a string of numbers or\
	numbers sparated by space."

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include "../libft/libft.h"

typedef struct s_bucket
{
	int	*numbers;
	int	*stack_a;
	int	*stack_b;
}	t_bucket;

void	display_stack(int *stack);
void	display_all_stack(t_bucket *bucket);
void	display_sorting(t_bucket *bucket);

void	free_bucket(t_bucket *bucket);

void	push_swap(t_bucket *bucket);

void	shift_down(int *stack, int size);
void	shift_up(int *stack, int size);

void	swap_items(int *item_1, int *item_2);
void	swap_a(t_bucket *bucket, int msg);
void	swap_b(t_bucket *bucket, int msg);
void	swap_ab(t_bucket *bucket);

void	rotate_a(t_bucket *bucket, int msg);
void	rotate_b(t_bucket *bucket, int msg);
void	rotate_ab(t_bucket *bucket);

void	reverse_rotate_a(t_bucket *bucket, int msg);
void	reverse_rotate_b(t_bucket *bucket, int msg);
void	reverse_rotate_ab(t_bucket *bucket);

void	push_a(t_bucket *bucket);
void	push_b(t_bucket *bucket);

void	single_arg_to_int(t_bucket *bucket, char *items);
void	multiple_args_to_int(t_bucket *bucket, int count, char **items);

void	basic_sort_a(t_bucket *bucket);
void	basic_sort_b(t_bucket *bucket);
void	medium_sort(t_bucket *bucket);
void	radix_sort(t_bucket *bucket, int max_bits, int max_size);

int		stack_items_count(int *stack);

bool	is_args_number(char *arg);
bool	is_args_duplicate(int *stack);
bool	is_stack_empty(int *stack);
bool	is_args_ordered(int *stack, int size, int msg);
bool	is_args_max_int(long int arg, t_bucket *bucket);

#endif
