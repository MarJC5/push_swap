/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 10:56:49 by jmartin           #+#    #+#             */
/*   Updated: 2022/01/20 11:57:25 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	display_stack(int *stack)
{
	int	i;

	i = -1;
	while (stack[++i])
	{
		ft_putnbr_fd(stack[i], 1);
		ft_putendl_fd("", 1);
	}
}

void	single_arg_to_int(t_bucket *bucket, char *items)
{
	char	**split;
	int		i;

	i = -1;
	split = ft_split(items, ' ');
	while (split[++i])
		;
	bucket->stack_a = (int *)malloc(i * sizeof(int));
	bucket->stack_b = (int *)malloc(i * sizeof(int));
	bucket->stack_len = i;
	i = -1;
	while (split[++i])
		bucket->stack_a[i] = ft_atoi(split[i]);
}

void	multiple_args_to_int(t_bucket *bucket, int count, char **items)
{
	int	nbr;
	int	i;

	i = 0;
	while (++i < count)
		;
	bucket->stack_a = (int *)malloc(i * sizeof(int));
	bucket->stack_b = (int *)malloc(i * sizeof(int));
	bucket->stack_len = i;
	i = 0;
	while (--count)
	{
		nbr = ft_atoi(items[i + 1]);
		bucket->stack_a[i++] = nbr;
	}
}

int	stack_items_count(int *stack, int stack_count)
{
	int	i;

	i = -1;
	while (stack[++i])
		;
	stack_count = i;
	return (stack_count);
}
