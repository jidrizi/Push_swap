/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_functions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:07:15 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/17 18:35:27 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_chain_link	*make_new_chain_link(int data)
{
	t_chain_link	*new_chain_link;

	new_chain_link = (t_chain_link *)ft_calloc(1, sizeof(t_chain_link));
	if (new_chain_link == NULL)
		return (NULL);
	new_chain_link->data = data;
	return (new_chain_link);
}

