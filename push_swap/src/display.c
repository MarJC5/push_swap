/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:39:10 by jmartin           #+#    #+#             */
/*   Updated: 2022/01/24 15:03:44 by jmartin          ###   ########.fr       */
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

void	display_all_stack(t_bucket *bucket)
{
	ft_putendl_fd("\n\033[1;31mStack A:\033[0m", 1);
	display_stack(bucket->stack_a);
	ft_putendl_fd("\n\033[1;33mStack B:\033[0m", 1);
	display_stack(bucket->stack_b);
	ft_putendl_fd("", 1);
}

void	display_sorting(t_bucket *bucket)
{
	ft_putendl_fd("\033[1;31mUnordered:\033[0m", 1);
	display_stack(bucket->stack_a);
	ft_putendl_fd("\n\033[1;33mCommands:\033[0m", 1);
}
