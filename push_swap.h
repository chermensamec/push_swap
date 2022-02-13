#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_list
{
	struct s_list	*next;
	struct s_list	*previous;
	int				val;
	int		*operations;
} t_list;

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

t_list	*ft_lst_create(int val);
void	ft_lst_pushfront(t_list **lst, t_list	*my_new);
void	ft_lst_pushback(t_list **lst, t_list *my_new);
void	ft_lst_del(t_list **lst);
void	ft_swap(t_list *lst);
void	ft_push(t_list **a, t_list **b);
void	ft_rotate(t_list **lst);
void	ft_reverse_rotate(t_list **lst);
char	**ft_split(char const *str, char s);
int		ft_strlen(const char *s);
int		ft_atoi(const char *s);
t_list	*ft_filling_stack(int argc, char *argv[]);
void	ft_print_list(t_list *lst);
void	ft_print_list_reverse(t_list *lst);
void	ft_sort_algorithm(t_list **lst);
int		*ft_make_sort_arr(t_list *lst);
int		ft_lst_get_len(t_list *lst);
#endif
