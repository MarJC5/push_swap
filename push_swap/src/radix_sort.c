/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:13:50 by jmartin           #+#    #+#             */
/*   Updated: 2022/02/16 22:57:19 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	radix_sort(t_bucket *bucket, int max_bits, int max_size)
{
	int	i;
	int	j;
	int	num;

	i = -1;
	while (((max_size - 1) >> max_bits) != 0)
		++max_bits;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < max_size)
		{
			num = bucket->stack_a[0];
			if (((num >> i) & 1) == 1)
				rotate_a(bucket, 1);
			else
				push_b(bucket);
		}
		while (*bucket->b_size)
			push_a(bucket);
	}
	if (bucket->stack_a[0] > bucket->stack_a[*bucket->a_size - 1])
		rotate_a(bucket, 1);
}
