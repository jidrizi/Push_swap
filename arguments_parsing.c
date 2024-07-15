/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments_parsing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:18:02 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/15 20:32:19 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_arg_digit(int argc, char *argv[])
{
	int	current_arg;
	int	current_char;

	current_arg = 1;
	while (current_arg < argc)
	{
		current_char = 0;
		if ((argv[current_arg][current_char] == '-'
			|| argv[current_arg][current_char] == '+')
			&& argv[current_arg][current_char + 1] != '\0')
			current_char++;
		while (argv[current_arg][current_char])
		{
			if (ft_isdigit(argv[current_arg][current_char]) == false)
				return (EXIT_FAILURE);
			current_char++;
		}
		current_arg++;
	}
	return (EXIT_SUCCESS);
}

int	is_arg_within_int_range(int argc, char *argv[])
{
	int	current_arg;
	int	size_of_arg;

	current_arg = 1;
	while (current_arg < argc)
	{
		size_of_arg = ft_strlen(argv[current_arg]);
		if (size_of_arg > 11)
			return (EXIT_FAILURE);
		if (size_of_arg == 11
			&& (ft_strncmp(argv[current_arg], "-2147483647", 11) > 0))
			return (EXIT_FAILURE);
		if (size_of_arg == 10
			&& (ft_strncmp(argv[current_arg], "2147483647", 10) > 0))
			return (EXIT_FAILURE);
		current_arg++;
	}
	return (EXIT_SUCCESS);
}

//next_args becomes current_arg + 1 in the 2nd while loop
int	is_arg_duplicate(int argc, char *argv[])
{
	int	current_arg;
	int	next_args;

	current_arg = 0;
	while (++current_arg < argc)
	{
		next_args = current_arg;
		while (++next_args < argc)
		{
			if (ft_strncmp(argv[current_arg], argv[next_args], 11) == 0)
				return (EXIT_FAILURE);
		}
	}
	return (EXIT_SUCCESS);
}

int	total_arguments_parsing(int argc, char *argv[])
{
	if (is_arg_digit(argc, argv) == EXIT_FAILURE)
		return (ft_printf("Error\nOnly numbers allowed\n"), EXIT_FAILURE);
	if (is_arg_within_int_range(argc, argv) == EXIT_FAILURE)
		return (ft_printf("Error\nNumber out of int range\n"), EXIT_FAILURE);
	if (is_arg_duplicate(argc, argv) == EXIT_FAILURE)
		return (ft_printf("Error\nDuplicates\n"), EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
