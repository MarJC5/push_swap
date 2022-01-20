/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 10:56:49 by jmartin           #+#    #+#             */
/*   Updated: 2022/01/20 11:03:37 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	display_args_to_int(t_bucket *bucket)
{
	int	i;

	i = -1;
	while (bucket->stack_a[++i])
		ft_putnbr_fd(bucket->stack_a[i], 1);
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
	i = 0;
	while (--count)
	{
		nbr = ft_atoi(items[i + 1]);
		bucket->stack_a[i++] = nbr;
	}
}
