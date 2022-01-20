/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 07:11:58 by jmartin           #+#    #+#             */
/*   Updated: 2022/01/20 13:20:32 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rotate_a(t_bucket *bucket)
{
	int	i;
	int	size;
	int	tmp;

	i = 0;
	size = stack_items_count(bucket->stack_a, bucket->stack_a_len);
	tmp = bucket->stack_a[0];
	if (size > 1)
	{
		while (i < size)
		{
			bucket->stack_a[i] = bucket->stack_a[i + 1];
			i++;
		}
	}
	bucket->stack_a[i] = tmp;
	ft_putstr_fd("ra", 1);
}

void	rotate_b(t_bucket *bucket)
{
	int	i;
	int	size;
	int	tmp;

	i = 0;
	size = stack_items_count(bucket->stack_b, bucket->stack_b_len);
	tmp = bucket->stack_b[0];
	if (size > 1)
	{
		while (i < size)
		{
			bucket->stack_b[i] = bucket->stack_b[i + 1];
			i++;
		}
	}
	bucket->stack_b[i] = tmp;
	ft_putstr_fd("rb", 1);
}

void	rotate_ab(t_bucket *bucket)
{
	(void)bucket;
	ft_putstr_fd("rr", 1);
}
