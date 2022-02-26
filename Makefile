NAME = push_swap
NAME_BONUS = push_swap_bonus
CC = gcc
CFLAGS = -Wall -Wextra -Werror 
SRC = ft_filling_stack.c ft_lst_pushback.c ft_sort_push_swap.c\
ft_rotate.c ft_split.c ft_get_sort_arr.c ft_lst_pushfront.c ft_strlen.c\
ft_lst_create.c ft_set_onplace.c ft_swap.c\
ft_atoi.c ft_lst_del.c ft_print_list.c\
ft_lst_get_len.c ft_push.c ft_sort_algorithm.c\
ft_error.c ft_reverse_rotate.c ft_sort_five.c ft_filling_stack_utils.c
MANDATORY = main.c
BONUS_FILE = main_bonus.c ft_check_operation.c

OBJ = $(patsubst %.c,%.o,$(SRC))
OBJ_MAN = $(patsubst %.c,%.o,$(MANDATORY))
OBJ_BON = $(patsubst %.c,%.o,$(BONUS_FILE))

all : $(NAME)

bonus : $(NAME_BONUS)

$(NAME) : $(OBJ) $(OBJ_MAN)
	rm -f $(OBJ_BON) $(NAME_BONUS)
	$(CC) $(CFLAGS) $(OBJ) $(OBJ_MAN) -o $(NAME) 

$(NAME_BONUS) : $(OBJ) $(OBJ_BON)
	rm -f $(OBJ_MAN) $(NAME)
	$(CC) $(CFLAGS) $(OBJ) $(OBJ_BON) -o $(NAME_BONUS) 

%.o : %.c push_swap.h push_swap_bonus.h Makefile
	gcc $(CFLAGS) -c $< -o $@ -g

clean :
	rm -f $(OBJ) $(OBJ_MAN) $(OBJ_BON)

fclean : clean
	rm -f $(NAME) $(NAME_BONUS)
	
re : fclean all

.PHONY : all clean fclean re
