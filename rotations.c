/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 21:08:12 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/29 19:16:48 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_chain_link *a, int print)
{
	int	first_data;
	int	first_id;

	if (!a || !a->next)
		return ;
	first_data = a->data;
	first_id = a->id;
	while (a->next)
	{
		a->data = a->next->data;
		a->id = a->next->id;
		a = a->next;
	}
	a->data = first_data;
	a->id = first_id;
	if (print)
		ft_printf("ra\n");
}

void	rb(t_chain_link *b, int print)
{
	int	first_data;
	int	first_id;

	if (!b || !b->next)
		return ;
	first_data = b->data;
	first_id = b->id;
	while (b->next)
	{
		b->data = b->next->data;
		b->id = b->next->id;
		b = b->next;
	}
	b->data = first_data;
	b->id = first_id;
	if (print)
		ft_printf("rb\n");
}

void	rr(t_chain_link *a, t_chain_link *b)
{
	ra(a, false);
	rb(b, false);
	ft_printf("rr\n");
}
