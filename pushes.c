/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:26:12 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/29 19:16:36 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	go_to_start(t_chain_link **stack)
{
	while (*stack && (*stack)->prev)
		*stack = (*stack)->prev;
}

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
	(*a)->next = og_a;
	if (og_a)
		(*a)->next->prev = *a;
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
	(*b)->next = og_b;
	if (og_b)
		(*b)->next->prev = *b;
	go_to_start(a);
	go_to_start(b);
	ft_printf("pb\n");
}
