/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:21:08 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/25 19:10:11 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

	// ft_printf("a:\n");
	// print_stack(a);
	// ft_printf("b:\n");
	// print_stack(b);
int	main(int argc, char *argv[])
{
	t_chain_link	*a;
	t_chain_link	*b;

	if (total_arguments_parsing(argc, argv) == EXIT_FAILURE)
		return (EXIT_FAILURE);
	if (argc == 1 || argc == 2)
		return (EXIT_SUCCESS);
	if (check_if_sorted_from_start(argc, argv) == EXIT_SUCCESS)
		return (EXIT_SUCCESS);
	a = (t_chain_link *)ft_calloc(1, sizeof(t_chain_link));
	if (a == NULL)
		return (EXIT_FAILURE);
	a = make_linked_list(make_args_int(argc, argv), argc);
	if (a == NULL)
		return (EXIT_FAILURE);
	b = NULL;
	return (0);
}
