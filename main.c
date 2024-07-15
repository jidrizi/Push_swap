/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:21:08 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/15 19:20:38 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	if (is_arg_digit(argc, argv) == EXIT_FAILURE)
		return (ft_printf("Error\nOnly numbers allowed\n"), EXIT_FAILURE);
	if (is_arg_within_int_range(argc, argv) == EXIT_FAILURE)
		return (ft_printf("Error\nNumber out of int range\n"), EXIT_FAILURE);
	ft_printf("Success\n");
	return (0);
}
