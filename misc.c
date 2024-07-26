/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:14:04 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/26 15:37:00 by jidrizi          ###   ########.fr       */
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

void	remove_plus_signs(int argc, char *argv[])
{
	int	current_arg;
	int	x;

	current_arg = 0;
	x = -1;
	while (++current_arg < argc)
	{
		if (current_arg < argc && argv[current_arg][0] == '+')
		{
			while (argv[current_arg][++x] != '\0')
				argv[current_arg][x] = argv[current_arg][x + 1];
			x = -1;
		}
	}
}
