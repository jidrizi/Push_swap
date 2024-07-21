/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 21:08:12 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/21 15:01:17 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_chain_link *a, int argc, int print)
{
	int	args;

	a->id = a->prev->id;
	a = a->next;
	args = 1;
	if (argc - 1 == 3)
	{
		a->id = 0;
		a = a->next;
		a->id = 1;
		a = a->next;
		a->id = 2;
		ft_printf("ra\n");
		return ;
	}
	while(args < argc - 1)
	{
		a->id -= 1;
		a = a->next;
		args++;
	}
	if (print)
		ft_printf("ra\n");
}

void	rb(t_chain_link *b, int argc, int print)
{
	int	args;
	
	b->id = b->prev->id;
	b = b->next;
	args = 1;
	while(args < argc - 1)
	{
		b->id -= 1;
		b = b->next;
		args++;
	}
	if (print)
		ft_printf("rb\n");
}

void	rr(t_chain_link *a, t_chain_link *b, int argc)
{
	ra(a, argc, false);
	rb(b, argc, false);
	ft_printf("rr\n");
}
