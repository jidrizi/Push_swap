/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_for_pushes.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 20:06:56 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/24 20:16:30 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fix_index_after_push(t_chain_link *og_first_link, t_chain_link **stack)
{
	int	last_id;

	last_id = 0;
	if (og_first_link && og_first_link->next)
	{
		(*stack) = (*stack)->next;
		while ((*stack)->next)
		{
			(*stack)->id = (*stack)->prev->id + 1;
			(*stack) = (*stack)->next;
			last_id++;
		}
		(*stack)->id = last_id + 1;
	}
}

void	go_to_start(t_chain_link **stack)
{
	while (*stack && (*stack)->prev)
		*stack = (*stack)->prev;
}

void	lower_id_by_one(t_chain_link **stack)
{
	while (*stack && (*stack)->next)
	{
		(*stack)->id -= 1;
		*stack = (*stack)->next;
	}
}
