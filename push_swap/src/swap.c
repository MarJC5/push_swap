/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 07:12:07 by jmartin           #+#    #+#             */
/*   Updated: 2022/01/21 00:18:59 by jmartin          ###   ########.fr       */
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
	int	i;

	i = stack_items_count(bucket->stack_a);
	if (i > 1)
	{
		swap_items(&bucket->stack_a[0], &bucket->stack_a[1]);
		ft_putendl_fd("sa", 1);
	}
}

void	swap_b(t_bucket *bucket)
{
	int	i;

	i = stack_items_count(bucket->stack_b);
	if (i > 1)
	{
		swap_items(&bucket->stack_b[0], &bucket->stack_a[1]);
		ft_putendl_fd("sb", 1);
	}
}

void	swap_ab(t_bucket *bucket)
{
	int	size_a;
	int	size_b;

	size_a = stack_items_count(bucket->stack_a);
	size_b = stack_items_count(bucket->stack_b);
	if (size_a > 1 && size_b > 1)
	{
		swap_items(&bucket->stack_a[0], &bucket->stack_a[1]);
		swap_items(&bucket->stack_b[0], &bucket->stack_a[1]);
		ft_putendl_fd("ss", 1);
	}
}
