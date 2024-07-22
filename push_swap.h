/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:21:28 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/22 17:03:31 by jidrizi          ###   ########.fr       */
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
int					check_if_sorted_from_start(int argc, char *argv[]);
t_chain_link		*make_linked_list(int *integer_arguments, int argc);
t_chain_link		*make_new_chain_link(int data, int link_id);
void				link_chainlinks(t_chain_link *current_link,
						t_chain_link *next_link);
t_chain_link		*get_pointer_to_id(t_chain_link *stack, int id);

// BASIC OPERATIONS
void				sa(t_chain_link *a, int print);
void				sb(t_chain_link *b, int print);
void				ss(t_chain_link *a, t_chain_link *b);
void				pa(t_chain_link *a, t_chain_link *b, int argc);
void				ra(t_chain_link *a, int print);
void				rb(t_chain_link *b, int print);
void				rr(t_chain_link *a, t_chain_link *b);
void				rra(t_chain_link *a, int print);
void				rrb(t_chain_link *b, int print);
void				rrr(t_chain_link *a, t_chain_link *b);
void				pb(t_chain_link *a, t_chain_link *b);

// Debugging
void				print_stack(t_chain_link *stack);

#endif