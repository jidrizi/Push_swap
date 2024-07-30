/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments_parsing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:18:02 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/30 17:48:41 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	remove_plus_signs(int number_of_elements, char *elements[])
{
	int	current_arg;
	int	x;

	current_arg = -1;
	x = -1;
	while (++current_arg < number_of_elements)
	{
		if (current_arg < number_of_elements && elements[current_arg][0] == '+')
		{
			while (elements[current_arg][++x] != '\0')
				elements[current_arg][x] = elements[current_arg][x + 1];
			x = -1;
		}
	}
}

static int	is_arg_digit(int number_of_elements, char *element_array[])
{
	int	current_arg;
	int	current_char;

	current_arg = 0;
	if (number_of_elements == 0)
		return (EXIT_SUCCESS);
	while (current_arg < number_of_elements)
	{
		current_char = 0;
		if ((element_array[current_arg][current_char] == '-'
			|| element_array[current_arg][current_char] == '+')
			&& element_array[current_arg][current_char + 1] != '\0')
			current_char++;
		while (element_array[current_arg][current_char])
		{
			if (ft_isdigit(element_array[current_arg][current_char]) == false)
				return (EXIT_FAILURE);
			current_char++;
		}
		current_arg++;
	}
	return (EXIT_SUCCESS);
}

static int	is_arg_within_int_range(int number_of_elements,
		char *element_array[])
{
	int	current_arg;
	int	size_of_arg;

	remove_plus_signs(number_of_elements, element_array);
	current_arg = -1;
	while (element_array != NULL && ++current_arg <= number_of_elements)
	{
		size_of_arg = ft_strlen(element_array[current_arg]);
		if (size_of_arg > 11)
			return (EXIT_FAILURE);
		if (size_of_arg == 11
			&& (ft_strncmp(element_array[current_arg], "-2147483647", 11) > 0))
			return (EXIT_FAILURE);
		if (size_of_arg == 10
			&& (ft_strncmp(element_array[current_arg], "2147483647", 10) > 0))
			return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

int	total_arguments_parsing(int number_of_elements, char **element_array)
{
	if (is_arg_digit(number_of_elements, element_array) == EXIT_FAILURE)
		return (print_error("Only digits allowed"), EXIT_FAILURE);
	if (is_arg_within_int_range(number_of_elements, element_array)
		== EXIT_FAILURE)
		return (print_error("Arguments not in int range"), EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
