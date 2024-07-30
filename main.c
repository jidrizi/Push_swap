/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:21:08 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/30 17:44:41 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//there was no space in misc.c so i put this here
void	print_error(char *error_message)
{
	ft_printf("Error\n");
	ft_putendl_fd(error_message, STDERR_FILENO);
}

static int	check_duplicates(int *integer_array, int number_of_elements)

{
	int	current_arg;
	int	next_args;

	current_arg = -1;
	while (++current_arg < number_of_elements)
	{
		next_args = current_arg;
		while (++next_args < number_of_elements)
		{
			if (integer_array[current_arg] == integer_array[next_args])
				return (print_error("Arguments can't be duplicates"), 1);
		}
	}
	return (EXIT_SUCCESS);
}

int	main(int argc, char *argv[])
{
	t_chain_link	*a;
	t_chain_link	*b;
	char			**element_array;
	int				*integer_array;

	element_array = split_elements(argv);
	argc = get_new_argc(element_array);
	if (total_arguments_parsing(argc, element_array) == 1)
		return (EXIT_FAILURE);
	if (argc == 0 || argc == 1)
		return (EXIT_SUCCESS);
	integer_array = make_args_int(argc, element_array);
	if (check_duplicates(integer_array, argc) == EXIT_FAILURE)
		return (free(integer_array), EXIT_FAILURE);
	if (check_if_sorted_from_start(argc, integer_array) == 0)
		return (free(integer_array), EXIT_SUCCESS);
	a = make_linked_list(integer_array, argc);
	if (a == NULL)
		return (EXIT_FAILURE);
	b = NULL;
	if (argc <= 5)
		sort_small_stack(&a, &b, argc);
	else
		sort_big_stack(&a, &b);
	return (free_link_list(a), free_link_list(b), 0);
}
