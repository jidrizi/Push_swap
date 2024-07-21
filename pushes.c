/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:26:12 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/21 18:20:44 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_chain_link *a, t_chain_link *b, int argc)
{
	int	args;
	
	args = 0;
	if (b == NULL)
		return ;
	b->next = b->prev->prev;
	b->prev->prev->next = b->next;
	b->prev = a->prev;
	a->prev->next = b;
	b->next = a;
	a->prev = b;
	b->id = 0;
	while(args < argc - 1)
	{
		a->id += 1;
		a = a->next;
		args++;
	}
	ft_printf("pa\n");
}

void pb(t_chain_link *a, t_chain_link *b, int argc)
{
	int	args;
	
	args = 0;
	if (a == NULL)
		return ;
	a->next = a->prev->prev;
	a->prev->prev->next = a->next;
	a->prev = b->prev;
	b->prev->next = a;
	a->next = b;
	b->prev = a;
	a->id = 0;
	while(args < argc - 1)
	{
		b->id += 1;
		b = b->next;
		args++;
	}
	ft_printf("pb\n");
}
