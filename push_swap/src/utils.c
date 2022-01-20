/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:06:57 by jmartin           #+#    #+#             */
/*   Updated: 2022/01/20 11:10:59 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	free_bucket(t_bucket *bucket)
{
	if (bucket)
	{
		free(bucket->stack_a);
		free(bucket->stack_b);
		free(bucket);
	}
}
