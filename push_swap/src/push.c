/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 07:20:36 by jmartin           #+#    #+#             */
/*   Updated: 2022/02/23 07:16:40 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	push_a(t_bucket *bucket)
{
	int	tmp;

	tmp = bucket->stack_b[0];
	if (*bucket->b_size > 0)
	{
		shift_down(bucket->stack_a, *bucket->a_size);
		*bucket->counter += 1;
		*bucket->a_size += 1;
		*bucket->b_size -= 1;
		shift_up(bucket->stack_b, *bucket->b_size);
		bucket->stack_a[0] = tmp;
	}
	ft_putendl_fd("pa", 1);
}

void	push_b(t_bucket *bucket)
{
	int	tmp;

	tmp = bucket->stack_a[0];
	if (*bucket->a_size > 0)
	{
		shift_up(bucket->stack_a, *bucket->a_size);
		*bucket->counter += 1;
		*bucket->b_size += 1;
		*bucket->a_size -= 1;
		shift_down(bucket->stack_b, *bucket->b_size);
		bucket->stack_b[0] = tmp;
	}
	ft_putendl_fd("pb", 1);
}
