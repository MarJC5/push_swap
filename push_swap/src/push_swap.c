/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:18:26 by jmartin           #+#    #+#             */
/*   Updated: 2022/02/16 12:38:13 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	push_swap(t_bucket *bucket)
{
	display_sorting(bucket);
	ft_putendl_fd("\n\033[33;1mOperations:\033[0m", 1);
	is_args_duplicate(bucket->stack_a, *bucket->a_size);
	if (!is_args_ordered(bucket, 0))
	{
		if (*bucket->a_size <= 3)
			basic_sort(bucket);
		else if (*bucket->a_size >= 5)
			radix_sort(bucket, 0, *bucket->a_size);
	}
	if (is_args_ordered(bucket, 1))
		;
	else
		display_sorting(bucket);
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
	bucket->b = 0;
	if (!bucket)
		return (0);
	if (argc == 2)
		bucket->a = single_arg_to_int(bucket, argv[argc - 1]);
	else if (argc >= 3)
		bucket->a = multiple_args_to_int(bucket, argc, argv);
	bucket->a_size = &bucket->a;
	bucket->b_size = &bucket->b;
	push_swap(bucket);
	free_bucket(bucket);
	return (0);
}
