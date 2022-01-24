/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 10:56:49 by jmartin           #+#    #+#             */
/*   Updated: 2022/01/24 15:00:27 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	count_lower(int n, int *nbrs, int len)
{
	int i;
	int ret;

	i = -1;
	ret = -1;
	while (++i < len)
		if (n >= nbrs[i])
			ret++;
	return (ret);
}

static int	*format_ints(int *nbrs, int len)
{
	int *a;
	int i;

	i = -1;
	a = (int *)malloc(len * sizeof(*a));
	if (!a)
		return (NULL);
	while (++i < len)
		a[i] = count_lower(nbrs[i], nbrs, len) + 1;
	return (a);
}

void	single_arg_to_int(t_bucket *bucket, char *items)
{
	char	**split;
	int		i;

	i = -1;
	is_args_number(items);
	split = ft_split(items, ' ');
	while (split[++i])
		;
	bucket->numbers = (int *)malloc(i * sizeof(int));
	bucket->stack_b = (int *)malloc(i * sizeof(int));
	i = -1;
	while (split[++i])
		bucket->numbers[i] = ft_atoi(split[i]) + 1;
	bucket->stack_a = format_ints(bucket->numbers, i);
	while (i--)
		free(split[i]);
	free(split);
}

void	multiple_args_to_int(t_bucket *bucket, int count, char **items)
{
	int	nbr;
	int	i;

	i = count - 1;
	bucket->numbers = (int *)malloc(i * sizeof(int));
	bucket->stack_b = (int *)malloc(i * sizeof(int));
	i = 0;
	while (--count)
	{
		is_args_number(items[i + 1]);
		nbr = ft_atoi(items[i + 1]);
		bucket->numbers[i++] = nbr + 1;
	}
	bucket->stack_a = format_ints(bucket->numbers, i);
}
