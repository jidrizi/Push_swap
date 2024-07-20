/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:21:28 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/20 13:59:24 by jidrizi          ###   ########.fr       */
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
typedef struct s_chain_link
{
	int					data;
	int					id;
	struct s_chain_link	*next;
	struct s_chain_link	*prev;
}t_chain_link;

// PROTOTYPES
int					total_arguments_parsing(int argc, char *argv[]);
int					*make_args_int(int argc, char *argv[]);
t_chain_link		*make_linked_list(int *integer_arguments, int argc);
void				sa(t_chain_link *a, int print);
void				sb(t_chain_link *b, int print);
void				ss(t_chain_link *a, t_chain_link *b);
void				pa(t_chain_link *a, t_chain_link *b, int argc);
void				ra(t_chain_link *a, int argc, int print);
void				rb(t_chain_link *b, int argc, int print);
void				rr(t_chain_link *a, t_chain_link *b, int argc);

#endif