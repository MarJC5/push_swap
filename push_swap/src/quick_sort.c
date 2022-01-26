/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:13:50 by jmartin           #+#    #+#             */
/*   Updated: 2022/01/26 13:59:50 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	quick_sort(t_bucket *bucket)
{
	display_sorting(bucket);
	ft_putendl_fd("\n--------------------------------", 1);
	ft_putendl_fd("\033[1mOperations:\033[0m", 1);
	quick_sort_a(bucket);
}

void	quick_sort_a(t_bucket *bucket)
{
	int	i;
	int	size;
	int	pivot;

	i = 0;
	size = stack_items_count(bucket->stack_a);
	while (size-- > 1)
	{
		pivot = bucket->stack_a[0];
		if (bucket->stack_a[++i] < pivot)
			push_b(bucket);
	}
	display_all_stack(bucket);
}

void	quick_sort_b(t_bucket *bucket)
{
	(void) bucket;
}

