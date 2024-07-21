/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:14:04 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/21 20:25:44 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*make_args_int(int argc, char *argv[])
{
	int	current_arg;
	int	atoi_arg;
	int	*integer_array;

	current_arg = 1;
	integer_array = (int *)ft_calloc(argc - 1, sizeof(int));
	if (integer_array == NULL)
		return (NULL);
	while (current_arg < argc)
	{
		atoi_arg = ft_atoi(argv[current_arg]);
		integer_array[current_arg - 1] = atoi_arg;
		current_arg++;
	}
	return (integer_array);
}

int	check_if_sorted_from_start(int argc, char *argv[])
{
	int	current_arg;
	
	current_arg = 1;
	while (current_arg < argc - 1)
	{
		if (ft_atoi(argv[current_arg]) > ft_atoi(argv[current_arg + 1]))
			return (EXIT_FAILURE);
		current_arg++;
	}
	return (EXIT_SUCCESS);
}