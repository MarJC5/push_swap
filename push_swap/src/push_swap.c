/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:18:26 by jmartin           #+#    #+#             */
/*   Updated: 2022/01/20 13:19:53 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	show_staks(t_bucket *bucket)
{
	ft_putendl_fd("\n\033[1;31mStack A:\033[0m", 1);
	display_stack(bucket->stack_a);
	ft_putendl_fd("\n\033[1;33mStack B:\033[0m", 1);
	display_stack(bucket->stack_b);
}

void	push_swap(t_bucket *bucket)
{
	rotate_a(bucket);
	show_staks(bucket);
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
