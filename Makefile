NAME = push_swap
NAME_BONUS = checker
CC = gcc
CFLAGS = -Wall -Wextra -Werror 
MANDATORY = ft_filling_stack.c ft_lst_pushback.c\
ft_rotate.c ft_split.c ft_get_sort_arr.c ft_lst_pushfront.c ft_strlen.c ft_lst_create.c ft_swap.c\
ft_atoi.c ft_lst_del.c ft_filling_stack_utils.c ft_lst_get_len.c ft_push.c\
ft_error.c ft_reverse_rotate.c main.c ft_sort_five.c ft_sort_algorithm.c\
ft_sort_push_swap.c ft_set_onplace.c
BONUS_FILE = bonus/ft_atoi_bonus.c bonus/ft_filling_stack_utils_bonus.c bonus/ft_lst_get_len_bonus.c\
bonus/ft_reverse_rotate_bonus.c bonus/ft_swap_bonus.c bonus/ft_check_operation_bonus.c\
bonus/ft_get_sort_arr_bonus.c bonus/ft_lst_pushback_bonus.c bonus/ft_rotate_bonus.c\
bonus/main_bonus.c bonus/ft_error_bonus.c bonus/ft_lst_create_bonus.c bonus/ft_lst_pushfront_bonus.c\
bonus/ft_split_bonus.c bonus/ft_filling_stack_bonus.c bonus/ft_lst_del_bonus.c bonus/ft_push_bonus.c\
bonus/ft_strlen_bonus.c bonus/get_next_line.c bonus/get_next_line_utils.c

OBJ_MAN = $(patsubst %.c,%.o,$(MANDATORY))
OBJ_BON = $(patsubst %.c,%.o,$(BONUS_FILE))

all : $(NAME)

bonus : $(NAME_BONUS)

$(NAME) : $(OBJ) $(OBJ_MAN)
	$(CC) $(CFLAGS) $(OBJ_MAN) -o $(NAME) 

$(NAME_BONUS) : $(OBJ) $(OBJ_BON)
	$(CC) $(CFLAGS) $(OBJ_BON) -o $(NAME_BONUS) 

%.o : %.c push_swap.h push_swap_bonus.h
	gcc $(CFLAGS) -c $< -o $@ -g

clean :
	rm -f $(OBJ) $(OBJ_MAN) $(OBJ_BON)

fclean : clean
	rm -f $(NAME) $(NAME_BONUS)
	
re : fclean all

.PHONY : all clean fclean re
