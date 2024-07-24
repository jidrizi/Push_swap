/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:26:12 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/24 20:13:56 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_chain_link **a, t_chain_link **b)
{
	t_chain_link	*og_a;
	t_chain_link	*og_b;

	if (!(*b))
		return ;
	og_a = *a;
	og_b = *b;
	*b = (*b)->next;
	if (*b)
		(*b)->prev = NULL;
	*a = og_b;
	(*a)->id = 0;
	(*a)->next = og_a;
	if (og_a)
	{
		(*a)->next->prev = *a;
		(*a)->next->id = 1;
	}
	fix_index_after_push(og_a, a);
	lower_id_by_one(b);
	if (*b)
		(*b)->id -= 1;
	go_to_start(a);
	go_to_start(b);
	ft_printf("pa\n");
}

void	pb(t_chain_link **a, t_chain_link **b)
{
	t_chain_link	*og_a;
	t_chain_link	*og_b;

	if (!(*a))
		return ;
	og_a = *a;
	og_b = *b;
	*a = (*a)->next;
	if (*a)
		(*a)->prev = NULL;
	*b = og_a;
	(*b)->id = 0;
	(*b)->next = og_b;
	if (og_b)
	{
		(*b)->next->prev = *b;
		(*b)->next->id = 1;
	}
	fix_index_after_push(og_b, b);
	lower_id_by_one(a);
	if (*a)
		(*a)->id -= 1;
	go_to_start(a);
	go_to_start(b);
	ft_printf("pb\n");
}
