/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 07:11:31 by jmartin           #+#    #+#             */
/*   Updated: 2022/01/21 01:05:52 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	reverse_rotate_a(t_bucket *bucket, int msg)
{
	int	size;
	int	tmp;

	size = stack_items_count(bucket->stack_a);
	tmp = bucket->stack_a[size];
	if (size > 1)
	{
		shift_down(bucket->stack_a, size);
		bucket->stack_a[0] = tmp;
		if (msg)
			ft_putendl_fd("rra", 1);
	}
}

void	reverse_rotate_b(t_bucket *bucket, int msg)
{
	int	size;
	int	tmp;

	size = stack_items_count(bucket->stack_b);
	tmp = bucket->stack_b[size];
	if (size > 1)
	{
		shift_down(bucket->stack_b, size);
		bucket->stack_b[0] = tmp;
		if (msg)
			ft_putendl_fd("rrb", 1);
	}
}

void	reverse_rotate_ab(t_bucket *bucket)
{
	reverse_rotate_a(bucket, 0);
	reverse_rotate_b(bucket, 0);
	ft_putendl_fd("rrr", 1);
}
