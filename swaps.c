/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:20:46 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/22 13:27:24 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_chain_link *a, int print)
{

	if (print)
		ft_printf("sa\n");
}

void	sb(t_chain_link *b, int print)
{

	if (print)
		ft_printf("sb\n");
}

void	ss(t_chain_link *a, t_chain_link *b)
{
	sa(a, false);
	sb(b, false);
	ft_printf("ss\n");
}
