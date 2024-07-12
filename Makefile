# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/12 14:24:26 by jidrizi           #+#    #+#              #
#    Updated: 2024/07/12 15:37:02 by jidrizi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

LIB = -lft -Llibft/

HEADER = -I libft/

DEPS = push_swap.h

SRCS = main.c

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

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
	rm -rf bin

fclean : clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re