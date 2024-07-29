/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_for_sort_big.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 18:34:03 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/29 19:17:26 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_ids_to_minus_one(t_chain_link *stack)
{
	while (stack->next != NULL)
	{
		stack->id = -1;
		stack = stack->next;
	}
	stack->id = -1;
}

void	make_id_for_big_stack(t_chain_link **stack)
{
	t_chain_link		*smallest;
	const t_chain_link	*og_stack = *stack;
	int					index;
	t_chain_link		*moving_stack;

	set_ids_to_minus_one(*stack);
	index = 0;
	moving_stack = *stack;
	while (moving_stack)
	{
		while ((*stack)->id != -1)
			*stack = (*stack)->next;
		smallest = (*stack);
		*stack = (*stack)->next;
		while (*stack)
		{
			if ((*stack)->id == -1 && (*stack)->data < smallest->data)
				smallest = (*stack);
			*stack = (*stack)->next;
		}
		*stack = (t_chain_link *)og_stack;
		smallest->id = index++;
		moving_stack = moving_stack->next;
	}
}
