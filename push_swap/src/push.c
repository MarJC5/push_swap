/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 07:20:36 by jmartin           #+#    #+#             */
/*   Updated: 2022/01/20 18:33:29 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	push_a(t_bucket *bucket)
{
	int size;
	int tmp;

	tmp = bucket->stack_b[0];
	size = stack_items_count(bucket->stack_b, bucket->stack_b_len);
	shift_up(bucket->stack_b, size);
	bucket->stack_b[size] = 0;
	shift_down(bucket->stack_a, size);
	bucket->stack_a[0] = tmp;
	ft_putstr_fd("pa", 1);
}

void	push_b(t_bucket *bucket)
{
	int size;
	int tmp;

	tmp = bucket->stack_a[0];
	size = stack_items_count(bucket->stack_a, bucket->stack_a_len);
	shift_up(bucket->stack_a, size);
	bucket->stack_a[size] = 0;
	shift_down(bucket->stack_b, size);
	bucket->stack_b[0] = tmp;
	ft_putstr_fd("pb", 1);
}
