NAME = libft.a

LIST = ft_filling_steck.c ft_lst_pushback.c ft_sort_push_swap.c\
ft_rotate.c ft_split.c ft_get_sort_arr.c ft_lst_pushfront.c ft_strlen.c\
ft_lst_create.c ft_set_onplace.c ft_swap.c\
ft_atoi.c ft_lst_del.c ft_print_list.c\
ft_lst_get_len.c ft_push.c ft_sort_algorithm.c main.c\
ft_error.c ft_reverse_rotate.c ft_sort_five.c

OBJ = $(patsubst %.c, %.o, $(LIST))

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $?
	
%.o : %.c libft.h
	gcc $(FLAGS) -c $< -o $@

clean : 
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean
