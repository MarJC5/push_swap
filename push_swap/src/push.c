/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 07:20:36 by jmartin           #+#    #+#             */
/*   Updated: 2022/01/24 22:37:56 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	push_a(t_bucket *bucket)
{
	int	size;
	int	tmp;

	tmp = bucket->stack_b[0];
	size = stack_items_count(bucket->stack_b);
	shift_up(bucket->stack_b, size);
	bucket->stack_b[size] = 0;
	size = stack_items_count(bucket->stack_a);
	shift_down(bucket->stack_a, size);
	bucket->stack_a[0] = tmp;
	ft_putendl_fd("pa", 1);
}

void	push_b(t_bucket *bucket)
{
	int	size;
	int	tmp;

	tmp = bucket->stack_a[0];
	size = stack_items_count(bucket->stack_a);
	shift_up(bucket->stack_a, size);
	bucket->stack_a[size] = 0;
	shift_down(bucket->stack_b, size);
	bucket->stack_b[0] = tmp;
	ft_putendl_fd("pb", 1);
}
