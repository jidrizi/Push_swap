/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:20:46 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/19 17:27:43 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_chain_link *a)
{
	int	tmp;

	if (a->next == NULL || !a)
		return ;
	tmp = a->data;
	a->data = a->next->data;
	a->next->data = tmp;
}
void sb(t_chain_link *b)
{
	int	tmp;

	if (b->next == NULL || !b)
		return ;
	tmp = b->data;
	b->data = b->next->data;
	b->next->data = tmp;
}
void ss(t_chain_link *a, t_chain_link *b)
{
	sa(a);
	sb(b);
}