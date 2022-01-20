/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 07:11:31 by jmartin           #+#    #+#             */
/*   Updated: 2022/01/20 18:33:11 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	reverse_rotate_a(t_bucket *bucket)
{
	int	size;
	int	tmp;

	size = stack_items_count(bucket->stack_a, bucket->stack_a_len);
	tmp = bucket->stack_a[size];
	if (size > 1)
	{
		shift_down(bucket->stack_a, size);
		bucket->stack_a[0] = tmp;
		ft_putstr_fd("rra", 1);
	}
}

void	reverse_rotate_b(t_bucket *bucket)
{
	int	size;
	int	tmp;

	size = stack_items_count(bucket->stack_b, bucket->stack_b_len);
	tmp = bucket->stack_b[size];
	if (size > 1)
	{
		shift_down(bucket->stack_b, size);
		bucket->stack_b[0] = tmp;
		ft_putstr_fd("rrb", 1);
	}
}

void	reverse_rotate_ab(t_bucket *bucket)
{
	(void)bucket;
	ft_putstr_fd("rrr", 1);
}
