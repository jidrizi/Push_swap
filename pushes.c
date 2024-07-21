/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:26:12 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/21 20:10:42 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_chain_link *a, t_chain_link *b, int argc)
{
	int	args;
	
	args = 1;
	if (b == NULL)
		return ;
	b->next = b->prev->prev;
	b->prev->prev->next = b->next;
	b->prev = a->prev;
	a->prev->next = b;
	b->next = a;
	a->prev = b;
	b->id = 0;
	while(args < argc)
	{
		a->id += 1;
		a = a->next;
		args++;
	}
	ft_printf("pa\n");
}

// void pb(t_chain_link *a, t_chain_link *b, int argc)
// {
// 	int	args;
	
// 	ft_printf("pb\n");
// }
