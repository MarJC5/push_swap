/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:17:17 by jmartin           #+#    #+#             */
/*   Updated: 2022/02/14 15:05:33 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	basic_sort_a(t_bucket *bucket)
{
	int	size;

	size = stack_items_count(bucket->stack_a);
	if (bucket->stack_a[0] > bucket->stack_a[(size + 1) / 2])
		swap_a(bucket, 1);
	if (bucket->stack_a[1] > bucket->stack_a[size])
	{
		reverse_rotate_a(bucket, 1);
		if (bucket->stack_a[0] > bucket->stack_a[1])
			swap_a(bucket, 1);
	}
}

void	basic_sort_b(t_bucket *bucket)
{
	int	size;

	size = stack_items_count(bucket->stack_b);
	if (bucket->stack_b[0] > bucket->stack_b[(size + 1) / 2])
		swap_b(bucket, 1);
	if (bucket->stack_b[1] > bucket->stack_b[size])
	{
		reverse_rotate_b(bucket, 1);
		if (bucket->stack_b[0] > bucket->stack_b[1])
			swap_b(bucket, 1);
	}
}

void	medium_sort(t_bucket *bucket)
{
	int	size;
	int	i;

	i = -1;
	size = stack_items_count(bucket->stack_a);
	while (++i < size)
		if (bucket->stack_a[i] <= size)
			push_b(bucket);
	push_a(bucket);
	basic_sort_a(bucket);
	size = stack_items_count(bucket->stack_b);
	while (size-- >= 0)
		push_a(bucket);
	display_all_stack(bucket);
}
