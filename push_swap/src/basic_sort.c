/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:17:17 by jmartin           #+#    #+#             */
/*   Updated: 2022/02/09 20:00:22 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	basic_sort(t_bucket *bucket)
{
	int	size;

	ft_putstr_fd("\n--------------------------------", 1);
	display_sorting(bucket);
	ft_putendl_fd("\n--------------------------------\n", 1);
	ft_putendl_fd("\033[1mOperations:\033[0m", 1);
	size = stack_items_count(bucket->stack_a);
	if (bucket->stack_a[0] > bucket->stack_a[(size + 1) / 2])
		swap_a(bucket, 1);
	if (bucket->stack_a[1] > bucket->stack_a[size])
	{
		reverse_rotate_a(bucket, 1);
		if (bucket->stack_a[0] > bucket->stack_a[1])
			swap_a(bucket, 1);
	}
}
