/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:18:26 by jmartin           #+#    #+#             */
/*   Updated: 2022/02/14 07:48:24 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	push_swap(t_bucket *bucket)
{
	is_args_duplicate(bucket->stack_a);
	if (!is_args_ordered(bucket->stack_a, stack_items_count(bucket->stack_a)
			, 0))
	{
		if (stack_items_count(bucket->stack_a) < 3)
			basic_sort(bucket, bucket->stack_a);
		else if (stack_items_count(bucket->stack_a) <= 5)
			medium_sort(bucket);
		else if (stack_items_count(bucket->stack_a) >= 5)
			radix_sort(bucket);
	}
	if (is_args_ordered(bucket->stack_a, stack_items_count(bucket->stack_a), 1))
		;
}

int	main(int argc, char **argv)
{
	t_bucket	*bucket;

	if (argc <= 1)
	{
		ft_putstr_fd(WRONG_ARGS_ERROR, 1);
		return (0);
	}
	bucket = malloc(sizeof(t_bucket));
	if (!bucket)
		return (0);
	if (argc == 2)
		single_arg_to_int(bucket, argv[argc - 1]);
	else if (argc >= 3)
		multiple_args_to_int(bucket, argc, argv);
	push_swap(bucket);
	free_bucket(bucket);
	return (0);
}
