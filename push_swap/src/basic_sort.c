/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:17:17 by jmartin           #+#    #+#             */
/*   Updated: 2022/02/16 10:32:47 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	basic_sort(t_bucket *bucket)
{
	if (bucket->stack_a[0] > bucket->stack_a[*bucket->a_size / 2])
		swap_a(bucket, 1);
	if (!is_args_ordered(bucket, 0)
		&& bucket->stack_a[1] > bucket->stack_a[*bucket->a_size])
	{
		reverse_rotate_a(bucket, 1);
		if (bucket->stack_a[0] > bucket->stack_a[1])
			swap_a(bucket, 1);
	}
}
