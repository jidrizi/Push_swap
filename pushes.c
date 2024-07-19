/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:26:12 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/19 19:02:09 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pa(t_chain_link *a, t_chain_link *b, int argc)
{
	(void)argc;
	if (b == NULL)
		return ;
	b->data = a->data;
	a->data = a->next->data;
	// rearange_list_after_move(a, argc);
	ft_printf("pa\n");
}