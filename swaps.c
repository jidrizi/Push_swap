/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:20:46 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/22 13:53:48 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_chain_link *a, int print)
{
	int	temp;

	if (!a || !a->next)
		return ;
	temp = a->data;
	a->data = a->next->data;
	a->next->data = temp;
	if (print)
		ft_printf("sa\n");
}

void	sb(t_chain_link *b, int print)
{
	int	temp;

	if (!b || !b->next)
		return ;
	temp = b->data;
	b->data = b->next->data;
	b->next->data = temp;
	if (print)
		ft_printf("sb\n");
}

void	ss(t_chain_link *a, t_chain_link *b)
{
	sa(a, false);
	sb(b, false);
	ft_printf("ss\n");
}
