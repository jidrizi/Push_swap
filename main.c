/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:21:08 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/21 18:18:58 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_chain_link	*a;
	t_chain_link	*b;
	t_chain_link	*bext;
	int				next = 0;

	if (argc == 1 || argc == 2)
		return (EXIT_SUCCESS);
	a = (t_chain_link *)ft_calloc(1, sizeof(t_chain_link));
	b = (t_chain_link *)ft_calloc(1, sizeof(t_chain_link));
	if (a == NULL || b == NULL)
		return (EXIT_FAILURE);
	if (total_arguments_parsing(argc, argv) == EXIT_FAILURE)
		return (EXIT_FAILURE);
	a = make_linked_list(make_args_int(argc, argv), argc);
	if (a == NULL)
		return (EXIT_FAILURE);
	bext = make_new_chain_link(111, 1);
	b->data = 11;
	b->next = bext;
	b->prev = bext;
	bext->prev = b;
	bext->next = b;
	pa(a, b, argc);
	while(next < argc - 1)
	{
		ft_printf("| %d", a->data);
		ft_printf("->%d  |", a->id);
		a = a->next;
		next++;
	}
	return (0);
}
