/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:13:50 by jmartin           #+#    #+#             */
/*   Updated: 2022/01/27 12:15:26 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	sort_bucket_b(t_bucket *bucket, int pivot)
{
	int	i;
	int	size;

	i = 0;
	size = stack_items_count(bucket->stack_b);
	pivot = bucket->stack_b[0];
}

void	quick_sort(t_bucket *bucket)
{
	int	i;
	int	size;
	int	pivot;

	i = 0;
	pivot = bucket->stack_a[0];
	size = stack_items_count(bucket->stack_a);
	display_sorting(bucket);
	ft_putendl_fd("\n--------------------------------", 1);
	push_b(bucket);
	while (++i < size)
	{
		if (bucket->stack_a[i] < pivot)
			push_b(bucket);
		else
			rotate_a(bucket, 1);
		sort_bucket_b(bucket, bucket->stack_b[0]);
	}
	display_all_stack(bucket);
}
