# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/08 12:47:42 by bjanette          #+#    #+#              #
#    Updated: 2022/02/18 15:03:06 by chermen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name 	= push_swap
CHECKER = checker
LIB		= push_swap.a
LIST_1 	= ft_lst_get_len.c ft_reverse_rotate.c ft_swap.c\
	ft_atoi.c ft_lst_pushback.c ft_rotate.c main.c\
	ft_filling_steck.c ft_lst_pushfront.c ft_set_onplace.c\
	ft_find.c ft_make_sort_arr.c ft_sort_algorithm.c\
	ft_lst_create.c ft_print_list.c ft_split.c\
	ft_lst_del.c ft_push.c ft_strlen.c
OBJ2 	= $(LIST_1:.c=.o)
D_FILES1 = $(patsubst %.c,%.d,$(LIST_1))

LIST_1B = checker.c
OBJ2B 	= $(LIST_1B:.c=.o)
D_FILES1B = $(patsubst %.c,%.d,$(LIST_1B))


FLAGS1 	= -Wall -Wextra -Werror -g		#TODO delete -g
# -O1 -g -fno-omit-frame-pointer
HEAD1 	= push_swap.h

all	    :  $(Name)
$(Name) : $(OBJ2)
	cc -o $(Name) $(OBJ2)

%.o: %.c Makefile
		@cc $(FLAGS1) -O2 -c $< -o $@ -MMD

include $(wildcard $(D_FILES1))

bonus	: $(LIB) $(OBJ2B)
		cc -o $(CHECKER) $(OBJ2B) $(LIB)

clean	: 
		@rm -f $(OBJ2) $(D_FILES1)
	
fclean	: clean
		@rm -f $(Name)
re		: fclean all

.PHONY	: all clean fclean re bonus
