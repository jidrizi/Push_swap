/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 19:21:51 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/26 15:20:08 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//made all the datas constants because it looks nicer
// when i declare them in the start xD
static void	sort_3_numbers(t_chain_link *a)
{
	const int	data1 = a->data;
	const int	data2 = a->next->data;
	const int	data3 = a->next->next->data;

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

void	sort_small_stack(t_chain_link **a, t_chain_link **b, int argc)
{
	(void)b;
	if (argc == 3)
		sa(*a, true);
	if (argc == 4)
		sort_3_numbers(*a);
}
