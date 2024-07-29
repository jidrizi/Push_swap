/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:21:28 by jidrizi           #+#    #+#             */
/*   Updated: 2024/07/29 19:09:59 by jidrizi          ###   ########.fr       */
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
int				total_arguments_parsing(int argc, char *argv[]);
int				*make_args_int(int argc, char *argv[]);
int				check_if_sorted_from_start(int argc, char *argv[]);
t_chain_link	*make_linked_list(int *integer_arguments, int argc);
t_chain_link	*make_new_chain_link(int data, int link_id);
void			link_chainlinks(t_chain_link *current_link,
					t_chain_link *next_link);
t_chain_link	*get_pointer_to_id(t_chain_link *stack, int id);
void			lower_id_by_one(t_chain_link **stack);
void			fix_index_after_push(t_chain_link *og_first_link,
					t_chain_link **stack);
void			sort_small_stack(t_chain_link **a, t_chain_link **b, int argc);
int				check_if_stack_sorted(t_chain_link *stack);
int				if_last_datas_smallest(t_chain_link **a, int number);
void			rotate_until_smallest_first(t_chain_link **a, int number);
void			sort_big_stack(t_chain_link **a, t_chain_link **b);
void			make_id_for_big_stack(t_chain_link **stack);
void			free_link_list(t_chain_link *link);


// BASIC OPERATIONS
void			sa(t_chain_link *a, int print);
void			sb(t_chain_link *b, int print);
void			ss(t_chain_link *a, t_chain_link *b);
void			ra(t_chain_link *a, int print);
void			rb(t_chain_link *b, int print);
void			rr(t_chain_link *a, t_chain_link *b);
void			rra(t_chain_link *a, int print);
void			rrb(t_chain_link *b, int print);
void			rrr(t_chain_link *a, t_chain_link *b);
void			pb(t_chain_link **a, t_chain_link **b);
void			pa(t_chain_link **a, t_chain_link **b);

// Debugging
void			print_stack(t_chain_link *stack);

#endif