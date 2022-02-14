/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:17:17 by jmartin           #+#    #+#             */
/*   Updated: 2022/02/14 07:57:18 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	basic_sort(t_bucket *bucket, int *stack)
{
	int	size;

	ft_putstr_fd("\n--------------------------------", 1);
	display_sorting(bucket);
	ft_putendl_fd("\n--------------------------------\n", 1);
	ft_putendl_fd("\033[1mOperations:\033[0m", 1);
	size = stack_items_count(stack);
	if (stack[0] > stack[(size + 1) / 2])
		swap_a(bucket, 1);
	if (stack[1] > stack[size])
	{
		reverse_rotate_a(bucket, 1);
		if (stack[0] > stack[1])
			swap_a(bucket, 1);
	}
}

void	medium_sort(t_bucket *bucket)
{
	int	size;

	size = stack_items_count(bucket->stack_a);
}
