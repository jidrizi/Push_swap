/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_functions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:07:15 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/18 19:18:25 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_chain_link	*make_new_chain_link(int data)
{
	t_chain_link	*new_chain_link;

	new_chain_link = (t_chain_link *)ft_calloc(1, sizeof(t_chain_link));
	if (new_chain_link == NULL)
		return (NULL);
	new_chain_link->data = data;
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
	t_chain_link	*link;
	t_chain_link	*temp_link;
	
	link = make_new_chain_link(integer_array[current_int]);
	if (link == NULL)
		return (EXIT_FAILURE);
	current_int = 1;
	while (current_int < argc - 1)
	{
		temp_link = make_new_chain_link(integer_array[current_int]);
		if (temp_link == NULL)
			return (free(link), EXIT_FAILURE);
		link_chainlinks(link, temp_link);
		link = temp_link;
		current_int ++;
	}
	return (EXIT_SUCCESS);
}
