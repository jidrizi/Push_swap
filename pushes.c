/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:26:12 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/24 18:29:25 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_chain_link **a, t_chain_link **b)
{
	t_chain_link	*og_a;
	t_chain_link	*og_b;
	int				last_id;
	if (!(*b))
		return ;
	last_id = 0;
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
	if (og_a && og_a->next)
	{
		(*a) = (*a)->next;
		while((*a)->next)
		{
			(*a)->id = (*a)->prev->id + 1;
			(*a) = (*a)->next;
			last_id++;
		}
		(*a)->id = last_id + 1;
	}
	while ((*b) && (*b)->next)
	{
		(*b)->id -= 1;
		(*b) = (*b)->next;
	}
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
	int				last_id;

	if (!(*a))
		return ;
	last_id = 0;
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
	if (og_b && og_b->next)
	{
		(*b) = (*b)->next;
		while((*b)->next)
		{
			(*b)->id = (*b)->prev->id + 1;
			(*b) = (*b)->next;
			last_id++;
		}
		(*b)->id = last_id + 1;
	}
	while ((*a) && (*a)->next)
	{
		(*a)->id -= 1;
		(*a) = (*a)->next;
	}
	if (*a)
		(*a)->id -= 1;
	go_to_start(a);
	go_to_start(b);
	ft_printf("pb\n");
}
