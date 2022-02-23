/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 07:11:58 by jmartin           #+#    #+#             */
/*   Updated: 2022/02/23 07:16:54 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rotate_a(t_bucket *bucket, int msg)
{
	int	tmp;

	tmp = bucket->stack_a[0];
	if (*bucket->a_size > 1)
	{
		shift_up(bucket->stack_a, *bucket->a_size);
		bucket->stack_a[*bucket->a_size - 1] = tmp;
		*bucket->counter += 1;
		if (msg)
			ft_putendl_fd("ra", 1);
	}
}

void	rotate_b(t_bucket *bucket, int msg)
{
	int	tmp;

	tmp = bucket->stack_b[0];
	if (*bucket->b_size > 1)
	{
		shift_up(bucket->stack_b, *bucket->b_size);
		bucket->stack_b[*bucket->b_size - 1] = tmp;
		*bucket->counter += 1;
		if (msg)
			ft_putendl_fd("rb", 1);
	}
}

void	rotate_ab(t_bucket *bucket)
{
	rotate_a(bucket, 0);
	rotate_b(bucket, 0);
	*bucket->counter -= 1;
	ft_putendl_fd("rr", 1);
}
