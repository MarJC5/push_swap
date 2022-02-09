/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:39:10 by jmartin           #+#    #+#             */
/*   Updated: 2022/02/09 11:39:19 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	display_stack(int *stack)
{
	int	i;
	int	size;

	i = -1;
	size = stack_items_count(stack);
	while (++i <= size)
	{
		ft_putnbr_fd(stack[i], 1);
		ft_putstr_fd(" ", 1);
	}
}

void	display_all_stack(t_bucket *bucket)
{
	ft_putendl_fd("\n--------------------------------", 1);
	ft_putstr_fd("\033[1mStack A\033[0m --> ", 1);
	display_stack(bucket->stack_a);
	ft_putstr_fd("\n\033[1mStack B\033[0m --> ", 1);
	display_stack(bucket->stack_b);
	ft_putendl_fd("\n--------------------------------", 1);
}

void	display_sorting(t_bucket *bucket)
{
	ft_putstr_fd("\n\033[1;31mStack A\033[0m --> ", 1);
	display_stack(bucket->stack_a);
}
