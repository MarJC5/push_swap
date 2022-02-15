/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:13:50 by jmartin           #+#    #+#             */
/*   Updated: 2022/02/15 08:22:57 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	radix_sort(t_bucket *bucket, int max_bits, int max_size)
{
	int	i;
	int	j;
	int	num;

	i = 0;
	j = 0;
	while ((max_size >> max_bits) != 0)
		++max_bits;
	while (i++ < max_bits)
	{
		while (j++ < (max_size + 1))
		{
			num = bucket->stack_a[0];
			if (((num >> i) & 1 )== 1)
				rotate_a(bucket, 1);
			else
				push_b(bucket);
		}
		while (is_stack_empty(bucket->stack_b))
			push_a(bucket);
	}
}
