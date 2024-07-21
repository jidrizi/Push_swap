/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:13:53 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/21 15:33:38 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_chain_link *a, int argc, int print)
{
	int	args;

	args = 0;
	while(args < argc - 1)
	{
		a->id += 1;
		a = a->next;
		args++;
	}
	a->prev->id = 0;
	if (print)
		ft_printf("rra\n");
}

void	rrb(t_chain_link *b, int argc, int print)
{
	int	args;

	args = 0;
	while(args < argc - 1)
	{
		b->id += 1;
		b = b->next;
		args++;
	}
	b->prev->id = 0;
	if (print)
		ft_printf("rrb\n");
}

void	rrr(t_chain_link *a, t_chain_link *b, int argc)
{
	rra(a, argc, false);
	rrb(b, argc, false);
	ft_printf("rrr\n");
}