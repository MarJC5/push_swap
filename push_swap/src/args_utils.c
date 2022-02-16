/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 10:56:49 by jmartin           #+#    #+#             */
/*   Updated: 2022/02/16 09:20:11 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	count_lower(int n, int *nbrs, int len)
{
	int	i;
	int	ret;

	i = -1;
	ret = 0;
	while (++i < len)
		if (n >= nbrs[i])
			ret++;
	return (ret);
}

static int	*format_ints(int *nbrs, int len)
{
	int	*a;
	int	i;

	i = -1;
	a = (int *)malloc(len * sizeof(int));
	if (!a)
		return (NULL);
	while (++i < len)
		a[i] = count_lower(nbrs[i], nbrs, len);
	return (a);
}

int	single_arg_to_int(t_bucket *bucket, char *items)
{
	char	**split;
	int		i;
	int		j;
	int		nbr;

	i = -1;
	is_args_number(items);
	split = ft_split(items, ' ');
	while (split[++i])
		;
	bucket->numbers = (int *)malloc(i * sizeof(int));
	bucket->stack_b = (int *)malloc(i * sizeof(int));
	j = -1;
	while (++j < i)
	{
		is_args_max_int(ft_atol(split[j]), bucket);
		nbr = ft_atoi(split[j]);
		bucket->numbers[j] = nbr;
	}
	bucket->stack_a = format_ints(bucket->numbers, i);
	return (i);
}

int	multiple_args_to_int(t_bucket *bucket, int count, char **items)
{
	int	nbr;
	int	i;
	int	j;

	i = count - 1;
	bucket->numbers = (int *)malloc(i * sizeof(int));
	bucket->stack_b = (int *)malloc(i * sizeof(int));
	j = -1;
	while (++j < i)
	{
		is_args_number(items[j + 1]);
		is_args_max_int(ft_atol(items[j + 1]), bucket);
		nbr = ft_atoi(items[j + 1]);
		bucket->numbers[j] = nbr;
	}
	bucket->a = i;
	bucket->b_size = 0;
	bucket->stack_a = format_ints(bucket->numbers, i);
	return (i);
}
