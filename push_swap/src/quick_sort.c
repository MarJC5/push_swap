/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:13:50 by jmartin           #+#    #+#             */
/*   Updated: 2022/01/25 14:36:19 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	median(int size)
{
	int	median;

	if (size % 2 == 0)
		median = (((size - 1) / 2 ) + (size / 2)) / 2;
	else
		median = size / 2;
	return (median);
}

void	quick_sort(t_bucket *bucket)
{
	int	i;
	int	size;

	i = 0;
	size = stack_items_count(bucket->stack_a);
	display_sorting(bucket);
	quick_sort_a(bucket);
	display_all_stack(bucket);
}

void	quick_sort_a(t_bucket *bucket)
{
	(void) bucket;
}

void	quick_sort_b(t_bucket *bucket)
{
	(void) bucket;
}

