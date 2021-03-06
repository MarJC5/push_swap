/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 07:12:07 by jmartin           #+#    #+#             */
/*   Updated: 2022/02/23 07:17:16 by jmartin          ###   ########.fr       */
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

void	swap_a(t_bucket *bucket, int msg)
{
	if (*bucket->a_size > 1)
	{
		swap_items(&bucket->stack_a[0], &bucket->stack_a[1]);
		*bucket->counter += 1;
		if (msg)
			ft_putendl_fd("sa", 1);
	}
}

void	swap_b(t_bucket *bucket, int msg)
{
	if (*bucket->b_size > 1)
	{
		swap_items(&bucket->stack_b[0], &bucket->stack_b[1]);
		*bucket->counter += 1;
		if (msg)
			ft_putendl_fd("sb", 1);
	}
}

void	swap_ab(t_bucket *bucket)
{
	swap_a(bucket, 0);
	swap_b(bucket, 0);
	*bucket->counter -= 1;
	ft_putendl_fd("ss", 1);
}
