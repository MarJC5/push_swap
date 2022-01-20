/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 07:12:07 by jmartin           #+#    #+#             */
/*   Updated: 2022/01/20 11:58:35 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	swap_items(int *item_1, int *item_2)
{
	int	swap;

	swap = *item_2;
	*item_2 = *item_1;
	*item_1 = swap;
}

void	swap_a(t_bucket *bucket)
{
	if (stack_items_count(bucket->stack_a, bucket->stack_a_len)> 1)
		swap_items(&bucket->stack_a[0], &bucket->stack_a[1]);
	ft_putendl_fd("sa", 1);
}

void	swap_b(t_bucket *bucket)
{
	if (stack_items_count(bucket->stack_b, bucket->stack_b_len) > 1)
		swap_items(&bucket->stack_b[1], &bucket->stack_a[0]);
	ft_putendl_fd("sb", 1);
}

void	swap_ab(t_bucket *bucket)
{
	swap_items(&bucket->stack_a[0], &bucket->stack_a[1]);
	swap_items(&bucket->stack_b[0], &bucket->stack_a[1]);
	ft_putendl_fd("ss", 1);
}
