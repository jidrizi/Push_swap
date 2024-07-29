/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:18:03 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/29 19:18:10 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_biggest_number(t_chain_link *stack)
{
	int	biggest_number;

	biggest_number = INT_MIN;
	while (stack)
	{
		if (stack->id > biggest_number)
			biggest_number = stack->id;
		stack = stack->next;
	}
	return (biggest_number);
}

static int	get_max_bits(int biggest_number)
{
	int	bits;

	bits = 0;
	while (biggest_number != 0)
	{
		biggest_number >>= 1;
		bits++;
	}
	return (bits);
}

static void	radix_sort(t_chain_link **a, t_chain_link **b)
{
	int	biggest_number;
	int	og_biggest_number;
	int	bits;
	int	maxbits;

	biggest_number = get_biggest_number(*a);
	og_biggest_number = biggest_number;
	maxbits = get_max_bits(biggest_number);
	bits = 0;
	while (bits < maxbits)
	{
		while (biggest_number >= 0)
		{
			if ((((*a)->id >> bits) & 1) == 1)
				ra(*a, true);
			else if ((((*a)->id >> bits) & 1) == 0)
				pb(a, b);
			biggest_number--;
		}
		while (*b)
			pa(a, b);
		bits++;
		biggest_number = og_biggest_number;
	}
}

void	sort_big_stack(t_chain_link **a, t_chain_link **b)
{
	make_id_for_big_stack(a);
	radix_sort(a, b);
}
