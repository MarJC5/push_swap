/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:13:50 by jmartin           #+#    #+#             */
/*   Updated: 2022/02/09 08:47:24 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	radix_sort(t_bucket *bucket)
{
	int	i;
	int	size;
	int	pivot;

	i = 0;
	pivot = bucket->stack_a[0];
	size = stack_items_count(bucket->stack_a);
	display_sorting(bucket);
	ft_putendl_fd("\n--------------------------------", 1);
	display_all_stack(bucket);
}
