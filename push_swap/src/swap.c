/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 07:12:07 by jmartin           #+#    #+#             */
/*   Updated: 2022/01/20 14:20:09 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	swap_items(int *item_1, int *item_2)
{
	int	swap;

	swap = *item_2;
	*item_2 = *item_1;
	*item_1 = swap;
}

void	swap_a(t_bucket *bucket)
{
	int	i;

	i = stack_items_count(bucket->stack_a, bucket->stack_a_len);
	if (i > 1)
		swap_items(&bucket->stack_a[0], &bucket->stack_a[1]);
	ft_putendl_fd("sa", 1);
}

void	swap_b(t_bucket *bucket)
{
	int	i;

	i = stack_items_count(bucket->stack_b, bucket->stack_b_len);
	if (i > 1)
		swap_items(&bucket->stack_b[0], &bucket->stack_a[1]);
	ft_putendl_fd("sb", 1);
}

void	swap_ab(t_bucket *bucket)
{
	int	a;
	int	b;

	a = stack_items_count(bucket->stack_a, bucket->stack_a_len);
	b = stack_items_count(bucket->stack_b, bucket->stack_b_len);
	if (a > 1 && b > 1)
	{
		swap_items(&bucket->stack_a[0], &bucket->stack_a[1]);
		swap_items(&bucket->stack_b[0], &bucket->stack_a[1]);
	}
	ft_putendl_fd("ss", 1);
}
