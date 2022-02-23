/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:58:14 by jmartin           #+#    #+#             */
/*   Updated: 2022/02/23 10:33:02 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

bool	is_args_number(char *arg)
{
	int	i;

	i = -1;
	while (arg[++i])
	{
		if (((arg[i] == 45 && ft_isdigit(arg[i + 1])) || arg[i] == 32
				|| ft_isdigit(arg[i])))
			continue ;
		else
		{
			ft_putendl_fd(WRONG_ARGS_ERROR, 1);
			exit(EXIT_FAILURE);
			return (0);
		}
	}
	return (1);
}

bool	is_args_duplicate(int *stack, int stack_size)
{
	int	i;
	int	j;

	i = 0;
	while (i <= stack_size)
	{
		j = i + 1;
		while (j <= stack_size)
		{
			if (stack[i] == stack[j])
			{
				ft_putendl_fd(WRONG_ARGS_ERROR, 1);
				exit(EXIT_FAILURE);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

bool	is_args_ordered(t_bucket *bucket)
{
	int	i;

	i = 0;
	while (i < (*bucket->a_size - 1))
	{
		if (bucket->stack_a[i] > bucket->stack_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

bool	is_args_max_int(long int arg, t_bucket *bucket)
{
	int	i;

	i = 0;
	if (arg > INT_MAX || arg < INT_MIN)
	{
		free_bucket(bucket);
		ft_putendl_fd(WRONG_ARGS_ERROR, 1);
		exit(EXIT_FAILURE);
	}
	return (1);
}
