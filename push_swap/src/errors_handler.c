/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:58:14 by jmartin           #+#    #+#             */
/*   Updated: 2022/01/21 11:36:42 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

bool	is_args_number(char *arg)
{
	int	i;

	i = -1;
	while (arg[++i])
	{
		if ((arg[i] == 43 || arg[i] == 45 || arg[i] == 32
				|| (arg[i] >= 9 && arg[i] <= 13)) || ft_isdigit(arg[i]))
			continue ;
		else
		{
			ft_putendl_fd("Error", 1);
			exit(EXIT_FAILURE);
			return (0);
		}
	}
	return (1);
}

bool	is_args_duplicate(int *stack)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = stack_items_count(stack);
	while (i <= size)
	{
		j = i + 1;
		while (j <= size)
		{
			if (stack[i] == stack[j])
			{
				ft_putendl_fd("Error", 1);
				exit(EXIT_FAILURE);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

bool	is_args_ordered(int *stack, int size)
{
	int	i;

	i = 1;
	while (i++ < size)
	{
		if (stack[i - 1] > stack[i])
			return (0);
	}
	ft_putendl_fd("OK", 1);
	exit(EXIT_SUCCESS);
	return (1);
}

bool	is_args_max_int(int arg)
{
	if (arg > INT_MAX)
	{
		ft_putendl_fd("Error", 1);
		exit(EXIT_FAILURE);
	}
	return (1);
}
