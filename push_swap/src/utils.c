/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:06:57 by jmartin           #+#    #+#             */
/*   Updated: 2022/02/16 07:25:12 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	free_bucket(t_bucket *bucket)
{
	if (bucket)
	{
		free(bucket->numbers);
		free(bucket->stack_a);
		free(bucket->stack_b);
		free(bucket);
	}
}

void	shift_up(int *stack, int size)
{
	int	i;

	i = 0;
	if (size > 1)
	{
		while (i < size)
		{
			stack[i] = stack[i + 1];
			i++;
		}
	}
}

void	shift_down(int *stack, int size)
{
	if (size > 1)
	{
		while (size > 0)
		{
			stack[size] = stack[size - 1];
			size--;
		}
	}
}

int	stack_items_count(int count, char **args)
{
	int		i;
	char 	**split;

	i = -1;
	if (count == 2)
	{
		split = ft_split(args[count - 1], ' ');
		while (split[++i])
			;
		return (i);
	}
	else if (count > 2)
		return (count - 1);
	return (0);
}
