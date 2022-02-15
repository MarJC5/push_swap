/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:18:26 by jmartin           #+#    #+#             */
/*   Updated: 2022/02/15 11:58:16 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	push_swap(t_bucket *bucket)
{
	is_args_duplicate(bucket->stack_a, *bucket->a_size);
	ft_putendl_fd("\033[1mOperations:\033[0m", 1);
	/*if (!is_args_ordered(bucket->stack_a, bucket->a_size, 1))
	{
		if (*bucket->a_size < 3)
			basic_sort(bucket, *bucket->a_size);
		else if (a_size < 5)
			medium_sort(bucket, *stack_a_size);
		else if (a_size >= 5)
			radix_sort(bucket, 0, a_size, stack_b_size);
	}*/
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
	bucket->a = 3;
	bucket->b = 0;
	bucket->a_size = &bucket->a;
	bucket->b_size = 0;
	ft_putnbr_fd(*bucket->a_size, 1);
	/*if (!bucket)
		return (0);
	if (argc == 2)
		single_arg_to_int(bucket, argv[argc - 1]);
	else if (argc >= 3)
		multiple_args_to_int(bucket, *bucket->a_size, argv);*/
	//push_swap(bucket);
	free_bucket(bucket);
	return (0);
}
