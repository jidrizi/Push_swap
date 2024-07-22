/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:13:53 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/22 17:18:18 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_chain_link *a, int print)
{
	int	last_data;

	if (!a || !a->next)
		return ;
	while (a->next)
		a = a->next;
	last_data = a->data;
	while (a->prev)
	{
		a->data = a->prev->data;
		a = a->prev;
	}
	a->data = last_data;
	if (print)
		ft_printf("rra\n");
}

void	rrb(t_chain_link *b, int print)
{
	int	last_data;

	if (!b || !b->next)
		return ;
	while (b->next)
		b = b->next;
	last_data = b->data;
	while (b->prev)
	{
		b->data = b->prev->data;
		b = b->prev;
	}
	b->data = last_data;
	if (print)
		ft_printf("rrb\n");
}

void	rrr(t_chain_link *a, t_chain_link *b)
{
	rra(a, false);
	rrb(b, false);
	ft_printf("rrr\n");
}
