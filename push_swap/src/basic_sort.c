/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:17:17 by jmartin           #+#    #+#             */
/*   Updated: 2022/02/15 11:05:30 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	basic_sort(t_bucket *bucket, int stack_a_size)
{
	ft_putnbr_fd(stack_a_size, 1);
	if (bucket->stack_a[0] > bucket->stack_a[stack_a_size / 2])
		swap_a(bucket, 1);
	if (bucket->stack_a[1] > bucket->stack_a[stack_a_size])
	{
		reverse_rotate_a(bucket, 1);
		if (bucket->stack_a[0] > bucket->stack_a[1])
			swap_a(bucket, 1);
	}
}

/*void	medium_sort(t_bucket *bucket, int *stack_a_size)
{
	int	size;

	size = stack_a_size;
	display_all_stack(bucket);
}*/
