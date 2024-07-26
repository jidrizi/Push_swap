/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 19:21:51 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/26 18:56:52 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_3_numbers(t_chain_link *a)
{
	int	data1;
	int	data2;
	int	data3;

	data1 = a->data;
	data2 = a->next->data;
	data3 = a->next->next->data;
	if (data1 > data2 && data2 < data3 && data1 > data3)
		ra(a, true);
	if (data1 > data2 && data2 < data3 && data1 < data3)
		sa(a, true);
	if (data1 < data2 && data2 > data3 && data1 > data3)
		rra(a, true);
	if (data1 < data2 && data2 > data3 && data1 < data3)
	{
		rra(a, true);
		sa(a, true);
	}
	if (data1 > data2 && data2 > data3 && data1 > data3)
	{
		ra(a, true);
		sa(a, true);
	}
}

//the while loop does ra until the first element has the smallest data
static void	sort_4_numbers(t_chain_link **a, t_chain_link **b)
{
	while (!((*a)->data < (*a)->next->data &&
	(*a)->data < (*a)->next->next->data &&
	(*a)->data < (*a)->next->next->next->data))
		ra(*a, true);
	pb(a, b);
	sort_3_numbers(*a);
	pa(a, b);
}

static void	sort_5_numbers(t_chain_link **a, t_chain_link **b)
{
	if (if_last_data_smallest(a) == EXIT_FAILURE)
		rotate_until_smallest_first(a);
	pb(a, b);
	sort_4_numbers(a, b);
	pa(a, b);
	sort_4_numbers(a, b);
}

void	sort_small_stack(t_chain_link **a, t_chain_link **b, int argc)
{
	if (argc == 3)
		sa(*a, true);
	if (argc == 4)
		sort_3_numbers(*a);
	if (argc == 5)
		sort_4_numbers(a, b);
	if (argc == 6)
		sort_5_numbers(a, b);
}


