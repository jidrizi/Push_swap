/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:14:04 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/30 17:27:54 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*make_args_int(int number_of_elements, char **element_array)
{
	int	current_arg;
	int	atoi_arg;
	int	*integer_array;

	current_arg = 0;
	integer_array = (int *)ft_calloc(number_of_elements, sizeof(int));
	if (integer_array == NULL)
		return (NULL);
	while (current_arg < number_of_elements)
	{
		atoi_arg = ft_atoi(element_array[current_arg]);
		integer_array[current_arg] = atoi_arg;
		current_arg++;
	}
	return (integer_array);
}

int	check_if_sorted_from_start(int number_of_elements, int *integer_array)
{
	int	current_arg;

	current_arg = 0;
	while (current_arg < number_of_elements - 1)
	{
		if (integer_array[current_arg] > integer_array[current_arg + 1])
			return (EXIT_FAILURE);
		current_arg++;
	}
	return (EXIT_SUCCESS);
}

int	check_if_stack_sorted(t_chain_link *stack)
{
	while (stack->next)
	{
		if (stack->data > stack->next->data)
			return (EXIT_FAILURE);
		stack = stack->next;
	}
	return (EXIT_SUCCESS);
}

// used in sort_5_numbers and in sort_4_numbers to check if the last data 
// or 2nd last data is the smallest
int	if_last_datas_smallest(t_chain_link **a, int element_count)
{
	int	last_data;
	int	second_last_data;

	while ((*a)->next)
		*a = (*a)->next;
	last_data = (*a)->data;
	second_last_data = (*a)->prev->data;
	while ((*a)->prev)
		*a = (*a)->prev;
	if (last_data < second_last_data
		&& last_data < (*a)->next->data
		&& last_data < (*a)->data
		&& (element_count == 4 || last_data < (*a)->next->next->data))
		return (rra(*a, true), EXIT_SUCCESS);
	if (second_last_data < last_data
		&& second_last_data < (*a)->next->data
		&& second_last_data < (*a)->data
		&& (element_count == 4 || second_last_data < (*a)->next->next->data))
		return (rra(*a, true), rra(*a, true), EXIT_SUCCESS);
	return (EXIT_FAILURE);
}

//used in sort_5_numbers and sort_4_numbers
//  to rotate until the smallest data is first
void	rotate_until_smallest_first(t_chain_link **a, int number_of_elements)
{
	if (number_of_elements == 4)
	{
		while (!((*a)->data < (*a)->next->data
				&& (*a)->data < (*a)->next->next->data
				&& (*a)->data < (*a)->next->next->next->data))
			ra(*a, true);
		return ;
	}
	while (!((*a)->data < (*a)->next->data
			&& (*a)->data < (*a)->next->next->data
			&& (*a)->data < (*a)->next->next->next->data
			&& (*a)->data < (*a)->next->next->next->next->data))
		ra(*a, true);
	return ;
}
