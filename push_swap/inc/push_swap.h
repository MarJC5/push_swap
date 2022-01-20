/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:18:21 by jmartin           #+#    #+#             */
/*   Updated: 2022/01/20 07:26:23 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

void	push_swap(void);

void	swap_a(void);
void	swap_b(void);
void	swap_ab(void);

void	rotate_a(void);
void	rotate_b(void);
void	rotate_ab(void);

void	reverse_rotate_a(void);
void	reverse_rotate_b(void);
void	reverse_rotate_ab(void);

void	push_a(void);
void	push_b(void);

#endif
