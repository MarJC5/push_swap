/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 07:11:58 by jmartin           #+#    #+#             */
/*   Updated: 2022/01/20 18:32:55 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rotate_a(t_bucket *bucket)
{
	int	i;
	int	size;
	int	tmp;

	i = 0;
	size = stack_items_count(bucket->stack_a, bucket->stack_a_len);
	tmp = bucket->stack_a[0];
	if (size > 1)
	{
		shift_up(bucket->stack_a, size);
		bucket->stack_a[size] = tmp;
		ft_putstr_fd("ra", 1);
	}
}

void	rotate_b(t_bucket *bucket)
{
	int	i;
	int	size;
	int	tmp;

	i = 0;
	size = stack_items_count(bucket->stack_b, bucket->stack_b_len);
	tmp = bucket->stack_b[0];
	if (size > 1)
	{
		shift_up(bucket->stack_b, size);
		bucket->stack_b[size] = tmp;
		ft_putstr_fd("rb", 1);
	}
}

void	rotate_ab(t_bucket *bucket)
{
	(void)bucket;
	ft_putstr_fd("rr", 1);
}
