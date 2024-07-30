# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/12 14:24:26 by jidrizi           #+#    #+#              #
#    Updated: 2024/07/30 13:51:55 by jidrizi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror
ifeq ($(DEBUG), 1)
CFLAGS += -g
endif

NAME = push_swap

LIB = -lft -Llibft/

HEADER = -I libft/

DEPS = push_swap.h

SRCS = main.c arguments_parsing.c linked_list_functions.c misc.c swaps.c\
		pushes.c rotations.c reverse_rotations.c split_into_elements.c\
		sort_small.c sort_big.c utils_for_sort_big.c\

OBJS = $(SRCS:%.c=bin/%.o)

ifeq ($(DEBUG), 1)
all: re
else
all: $(NAME)
endif

bin :
	@mkdir -p bin

bin/%.o : %.c $(DEPS) | bin
	$(CC) -c -o $@ $< $(CFLAGS) $(HEADER)
	
./libft/libft.a:
	@git submodule update --init ./libft
	@make -C ./libft

$(NAME): ./libft/libft.a $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(LIB) -ldl $(HEADER) $(CFLAGS)

clean :
	@rm -rf bin
	@echo "Object files removed"

fclean : clean
	@rm -f $(NAME)
	@echo "$(NAME) removed"

re: fclean $(NAME)

.PHONY: all clean fclean re clean_when_debug
