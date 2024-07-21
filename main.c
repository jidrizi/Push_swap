/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:21:08 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/21 20:15:21 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_chain_link	*a;
	t_chain_link	*b;
	int				next = 0;

	if (argc == 1 || argc == 2)
		return (EXIT_SUCCESS);
	a = (t_chain_link *)ft_calloc(1, sizeof(t_chain_link));
	b = (t_chain_link *)ft_calloc(1, sizeof(t_chain_link));
	if (a == NULL || b == NULL)
		return (EXIT_FAILURE);
	if (total_arguments_parsing(argc, argv) == EXIT_FAILURE)
		return (EXIT_FAILURE);
	if (check_if_sorted_from_start(argc, argv) == EXIT_SUCCESS)
		return (EXIT_SUCCESS);
	a = make_linked_list(make_args_int(argc, argv), argc);
	if (a == NULL)
		return (EXIT_FAILURE);
	// pb(a, b, argc);
	while(next < argc - 1)
	{
		ft_printf("| %d", a->data);
		ft_printf("->%d  |", a->id);
		a = a->next;
		next++;
	}
	return (0);
}
