/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments_parsing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:18:02 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/15 17:57:59 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_arg_digit(int argc, char *argv[])
{
	int current_arg;
	int current_char;

	current_arg = 1;
	
	while (current_arg < argc)
	{
		current_char = 0;
		if (argv[current_arg][current_char] == '-' ||
			argv[current_arg][current_char] == '+')
			current_char++;
		while (argv[current_arg][current_char])
		{
			if (ft_isdigit(argv[current_arg][current_char]) != EXIT_SUCCESS)
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

	current_arg = 1;
	while (current_arg < argc)
	{
		if (ft_strlen(argv[current_arg]) == 11 &&
		(ft_strncmp(argv[current_arg], "-2147483648", 11) < 0))
			return (EXIT_FAILURE);
		if (ft_strlen(argv[current_arg]) == 10 &&
			(ft_strncmp(argv[current_arg], "2147483647", 10) <= 0))
			return (EXIT_FAILURE);
		if (ft_strlen(argv[current_arg]) > 10)
			return (EXIT_FAILURE);
		current_arg++;
	}
	return (EXIT_SUCCESS);
}

int ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}