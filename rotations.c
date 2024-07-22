/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 21:08:12 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/22 17:07:34 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_chain_link *a, int print)
{
	int	first_data;

	if (!a || !a->next)
		return ;
	first_data = a->data;
	while (a->next)
	{
		a->data = a->next->data;
		a = a->next;
	}
	a->data = first_data;
	if (print)
		ft_printf("ra\n");
}
void	rb(t_chain_link *b, int print)
{
	int	first_data;

	if (!b || !b->next)
		return ;
	first_data = b->data;
	while (b->next)
	{
		b->data = b->next->data;
		b = b->next;
	}
	b->data = first_data;
	if (print)
		ft_printf("rb\n");
}
void	rr(t_chain_link *a, t_chain_link *b)
{
	ra(a, false);
	rb(b, false);
	ft_printf("rr\n");
}
