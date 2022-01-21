/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 10:56:49 by jmartin           #+#    #+#             */
/*   Updated: 2022/01/21 11:23:01 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	single_arg_to_int(t_bucket *bucket, char *items)
{
	char	**split;
	int		i;

	i = -1;
	is_args_number(items);
	split = ft_split(items, ' ');
	while (split[++i])
		;
	bucket->stack_a = (int *)malloc(i * sizeof(int));
	bucket->stack_b = (int *)malloc(i * sizeof(int));
	i = -1;
	while (split[++i])
		bucket->stack_a[i] = ft_atoi(split[i]);
	while (i--)
		free(split[i]);
	free(split);
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
		is_args_number(items[i + 1]);
		nbr = ft_atoi(items[i + 1]);
		bucket->stack_a[i++] = nbr;
	}
}

int	stack_items_count(int *stack)
{
	int	i;

	i = -1;
	while (stack[++i])
		;
	return (i - 1);
}

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

void	display_all_stack(t_bucket *bucket)
{
	ft_putendl_fd("\n\033[1;31mStack A:\033[0m", 1);
	display_stack(bucket->stack_a);
	ft_putendl_fd("\n\033[1;33mStack B:\033[0m", 1);
	display_stack(bucket->stack_b);
	ft_putendl_fd("", 1);
}
