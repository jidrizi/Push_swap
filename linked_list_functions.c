/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_functions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:07:15 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/19 15:52:17 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_chain_link	*make_new_chain_link(int data, int link_id)
{
	t_chain_link	*new_chain_link;

	new_chain_link = (t_chain_link *)ft_calloc(1, sizeof(t_chain_link));
	if (new_chain_link == NULL)
		return (NULL);
	new_chain_link->data = data;
	new_chain_link->id = link_id;
	return (new_chain_link);
}

static void	link_chainlinks(t_chain_link *current_link, t_chain_link *next_link)
{
	current_link->next = next_link;
	next_link->prev = current_link;
}

int	make_linked_list(int *integer_array, int argc)
{
	int				current_int;
	int				link_id;
	t_chain_link	*link;
	t_chain_link	*temp_link;

	current_int = 0;
	link_id = 0;
	link = make_new_chain_link(integer_array[current_int], link_id);
	ft_printf("%d : %d\n", link->data, link->id);
	if (link == NULL)
		return (EXIT_FAILURE);
	current_int++;
	while (current_int < argc - 1)
	{
		link_id++;
		temp_link = make_new_chain_link(integer_array[current_int], link_id);
		ft_printf("%d : %d\n", temp_link->data, temp_link->id);
		if (temp_link == NULL)
			return (free(link), EXIT_FAILURE);
		link_chainlinks(link, temp_link);
		link = temp_link;
		current_int ++;
	}
	
	return (EXIT_SUCCESS);
}
