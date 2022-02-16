/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:18:21 by jmartin           #+#    #+#             */
/*   Updated: 2022/02/16 10:32:59 by jmartin          ###   ########.fr       */
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
	int a;
	int	b;
	int	*a_size;
	int	*b_size;
}	t_bucket;

void	display_stack_a(t_bucket *bucket);
void	display_stack_b(t_bucket *bucket);
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

int		single_arg_to_int(t_bucket *bucket, char *items);
int		multiple_args_to_int(t_bucket *bucket, int count, char **items);

void	basic_sort(t_bucket *bucket);
//void	radix_sort(t_bucket *bucket, int max_bits, int max_size, int *item_count);

bool	is_args_number(char *arg);
bool	is_stack_empty(int stack_count);
bool	is_args_duplicate(int *stack, int stack_size);
bool	is_args_ordered(t_bucket *bucket, int msg);
bool	is_args_max_int(long int arg, t_bucket *bucket);

#endif
