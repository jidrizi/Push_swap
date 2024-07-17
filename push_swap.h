/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:21:28 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/17 18:37:26 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// EXTERNAL LIBRARIES
# include <limits.h>
# include <stdbool.h>

// LOCAL LIBRARIES
# include "libft.h"

// MACROS

// TYPES
typedef	struct s_chain_link
{
	int					data;
	struct s_chain_link	*next;
	struct s_chain_link	*prev;
	int					id;
}t_chain_link;

// PROTOTYPES
int		total_arguments_parsing(int argc, char *argv[]);

#endif