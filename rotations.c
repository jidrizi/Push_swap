/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 21:08:12 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/20 14:00:23 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_chain_link *a, int argc, int print)
{
	t_chain_link	*tmp;
	int				args;
	int				first_data;

	args = 0;
	tmp = a;
	first_data = a->data;
	while (args < argc - 2)
	{
		tmp->data = tmp->next->data;
		tmp = tmp->next;
		args++;
	}
	tmp->data = first_data;
	if (print)
		ft_printf("ra\n");
}

void	rb(t_chain_link *b, int argc, int print)
{
	t_chain_link	*tmp;
	int				args;
	int				first_data;

	args = 0;
	tmp = b;
	first_data = b->data;
	while (args < argc - 2)
	{
		tmp->data = tmp->next->data;
		tmp = tmp->next;
		args++;
	}
	tmp->data = first_data;
	if (print)
		ft_printf("rb\n");
}

void	rr(t_chain_link *a, t_chain_link *b, int argc)
{
	ra(a, argc, false);
	rb(b, argc, false);
	ft_printf("rr\n");
}
