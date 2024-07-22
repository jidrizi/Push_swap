/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 21:08:12 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/22 13:27:40 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_chain_link *a, int argc, int print)
{
	if (print)
		ft_printf("ra\n");
}

void	rb(t_chain_link *b, int argc, int print)
{
	if (print)
		ft_printf("rb\n");
}

void	rr(t_chain_link *a, t_chain_link *b, int argc)
{
	ra(a, argc, false);
	rb(b, argc, false);
	ft_printf("rr\n");
}
