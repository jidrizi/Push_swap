/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_functions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:07:15 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/19 16:10:44 by jidrizi          ###   ########.fr       */
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
	static int		current_int = 0;
	static int		link_id = 0;
	t_chain_link	*link;
	t_chain_link	*temp_link;
	t_chain_link	*first_link;

	link = make_new_chain_link(integer_array[current_int], link_id);
	first_link = link;
	if (link == NULL)
		return (EXIT_FAILURE);
	while (++current_int < argc - 1)
	{
		link_id++;
		temp_link = make_new_chain_link(integer_array[current_int], link_id);
		if (temp_link == NULL)
			return (free(link), EXIT_FAILURE);
		link_chainlinks(link, temp_link);
		link = temp_link;
	}
	link_chainlinks(link, first_link);
	return (EXIT_SUCCESS);
}
