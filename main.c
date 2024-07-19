/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:21:08 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/17 20:27:57 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_chain_link	*linked_list;
	
	linked_list = (t_chain_link *)ft_calloc(1, sizeof(t_chain_link));
	if (argc == 1)
		return (EXIT_SUCCESS);
	if (total_arguments_parsing(argc, argv) == EXIT_FAILURE)
		return (EXIT_FAILURE);
	make_linked_list(make_args_int(argc, argv), argc);
	return (0);
}
