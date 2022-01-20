/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:18:21 by jmartin           #+#    #+#             */
/*   Updated: 2022/01/20 10:46:00 by jmartin          ###   ########.fr       */
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
}	t_bucket;

void	push_swap(t_bucket *bucket);

void	swap_a(void);
void	swap_b(void);
void	swap_ab(void);

void	rotate_a(void);
void	rotate_b(void);
void	rotate_ab(void);

void	reverse_rotate_a(void);
void	reverse_rotate_b(void);
void	reverse_rotate_ab(void);

void	push_a(void);
void	push_b(void);

void	single_arg_to_int(t_bucket *bucket, char *items);
void	multiple_args_to_int(t_bucket *bucket, int count, char **items);

#endif
