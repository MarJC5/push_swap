/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:39:10 by jmartin           #+#    #+#             */
/*   Updated: 2022/02/16 10:21:41 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	display_stack_a(t_bucket *bucket)
{
	int	i;

	i = -1;
	while (++i < *bucket->a_size)
	{
		ft_putnbr_fd(bucket->stack_a[i], 1);
		ft_putstr_fd(" ", 1);
	}
}

void	display_stack_b(t_bucket *bucket)
{
	int	i;

	i = -1;
	while (++i < *bucket->b_size)
	{
		ft_putnbr_fd(bucket->stack_b[i], 1);
		ft_putstr_fd(" ", 1);
	}
}

void	display_all_stack(t_bucket *bucket)
{
	ft_putendl_fd("\n--------------------------------", 1);
	ft_putstr_fd("\033[1mStack A\033[0m --> ", 1);
	display_stack_a(bucket);
	ft_putstr_fd("\n\033[1mStack B\033[0m --> ", 1);
	display_stack_b(bucket);
	ft_putendl_fd("\n--------------------------------", 1);
}

void	display_sorting(t_bucket *bucket)
{
	ft_putendl_fd("\n--------------------------------", 1);
	ft_putstr_fd("\033[1;31mStack A\033[0m --> ", 1);
	display_stack_a(bucket);
	ft_putendl_fd("\n--------------------------------", 1);
}
