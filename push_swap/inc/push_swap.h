/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:18:21 by jmartin           #+#    #+#             */
/*   Updated: 2022/01/20 11:52:09 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define WRONG_ARGS_ERROR	"Wrong number of arguments, please enter a string of numbers or\
	numbers spearated by space."

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct s_bucket
{
	int	*stack_a;
	int	*stack_b;
	int	stack_a_len;
	int	stack_b_len;
	int	stack_len;
}	t_bucket;

void	free_bucket(t_bucket *bucket);

void	push_swap(t_bucket *bucket);

void	swap_a(t_bucket *bucket);
void	swap_b(t_bucket *bucket);
void	swap_ab(t_bucket *bucket);

void	rotate_a(void);
void	rotate_b(void);
void	rotate_ab(void);

void	reverse_rotate_a(void);
void	reverse_rotate_b(void);
void	reverse_rotate_ab(void);

void	push_a(void);
void	push_b(void);

void	display_stack(int *stack);
void	single_arg_to_int(t_bucket *bucket, char *items);
void	multiple_args_to_int(t_bucket *bucket, int count, char **items);
int		stack_items_count(int *stack, int stack_count);

#endif
