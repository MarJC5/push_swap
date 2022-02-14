/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 07:20:36 by jmartin           #+#    #+#             */
/*   Updated: 2022/02/14 10:32:31 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	push_a(t_bucket *bucket)
{
	int	size;
	int	tmp;

	size = stack_items_count(bucket->stack_a) + 1;
	if (size > 0)
	{
		tmp = bucket->stack_b[0];
		shift_down(bucket->stack_a, size);
		bucket->stack_a[0] = tmp;
		size = stack_items_count(bucket->stack_b) + 1;
		shift_up(bucket->stack_b, size);
		bucket->stack_b[size - 1] = 0;
	}
	ft_putendl_fd("pa", 1);
}

void	push_b(t_bucket *bucket)
{
	int	size;
	int	tmp;

	size = stack_items_count(bucket->stack_a);
	if (size > 0)
	{
		tmp = bucket->stack_a[0];
		shift_up(bucket->stack_a, size);
		bucket->stack_a[size] = 0;
		shift_down(bucket->stack_b, size);
		bucket->stack_b[0] = tmp;
	}
	ft_putendl_fd("pb", 1);
}
