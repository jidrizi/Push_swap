/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:14:04 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/17 18:35:12 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*make_args_int(int argc, char *argv[])
{
	int current_arg;
	int *integer_args;

	current_arg = 1;
	integer_args = (int *)ft_calloc(argc - 1, sizeof(int));
	if (integer_args == NULL)
		return (NULL);
	while (current_arg < argc)
	{
		argv[current_arg] = ft_atoi(argv[current_arg]);
		integer_args[current_arg - 1] = argv[current_arg];
		current_arg++;
	}
	return (integer_args);
}
