/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_functions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:07:15 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/30 17:38:55 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_chain_link	*make_new_chain_link(int data, int link_id)
{
	t_chain_link	*new_chain_link;

	new_chain_link = (t_chain_link *)ft_calloc(1, sizeof(t_chain_link));
	if (new_chain_link == NULL)
		return (NULL);
	new_chain_link->data = data;
	new_chain_link->id = link_id;
	return (new_chain_link);
}

void	link_chainlinks(t_chain_link *current_link, t_chain_link *next_link)
{
	current_link->next = next_link;
	next_link->prev = current_link;
}

t_chain_link	*make_linked_list(int *integer_array, int number_of_elements)
{
	static int		current_int = 0;
	static int		link_id = 0;
	t_chain_link	*link;
	t_chain_link	*temp_link;
	t_chain_link	*first_link;

	link = make_new_chain_link(integer_array[current_int], link_id);
	first_link = link;
	if (link == NULL)
		return (free(integer_array), NULL);
	while (++current_int < number_of_elements)
	{
		link_id++;
		temp_link = make_new_chain_link(integer_array[current_int], link_id);
		if (temp_link == NULL)
			return (free(integer_array), free_link_list(first_link), NULL);
		link_chainlinks(link, temp_link);
		link = temp_link;
	}
	free(integer_array);
	return (first_link);
}

void	free_link_list(t_chain_link *link)
{
	t_chain_link	*temp;

	while (link)
	{
		temp = link->next;
		free(link);
		link = temp;
	}
}
