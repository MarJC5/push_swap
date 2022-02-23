/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:18:26 by jmartin           #+#    #+#             */
/*   Updated: 2022/02/23 10:08:50 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	push_swap(t_bucket *bucket)
{
	is_args_duplicate(bucket->stack_a, *bucket->a_size);
	if (is_args_ordered(bucket))
		display_sorting(bucket, GREEN, DISPLAY_STATUS, 0);
	else
	{
		display_sorting(bucket, RED, DISPLAY_STATUS, 0);
		if (*bucket->a_size <= 3)
			basic_sort(bucket);
		else if (*bucket->a_size <= 5)
			medium_sort(bucket);
		else if (*bucket->a_size > 5)
			radix_sort(bucket, 0, *bucket->a_size);
		if (is_args_ordered(bucket) && *bucket->b_size == 0)
			display_sorting(bucket, GREEN, DISPLAY_STATUS, 2);
		else
			display_sorting(bucket, RED, DISPLAY_STATUS, 1);
	}
}

int	main(int argc, char **argv)
{
	t_bucket	*bucket;
	int			counter;

	counter = 0;
	if (argc <= 1)
		return (0);
	bucket = malloc(sizeof(t_bucket));
	bucket->b = 0;
	if (!bucket)
		return (0);
	if (argc == 2)
		bucket->a = single_arg_to_int(bucket, argv[argc - 1]);
	else if (argc >= 3)
		bucket->a = multiple_args_to_int(bucket, argc, argv);
	bucket->a_size = &bucket->a;
	bucket->b_size = &bucket->b;
	bucket->counter = &counter;
	push_swap(bucket);
	free_bucket(bucket);
	return (0);
}
