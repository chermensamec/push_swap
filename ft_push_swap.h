#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H
typedef struct s_list
{
	struct s_list	*next;
	struct s_list	*previous;
	int				val;
} t_list;

#include <stdlib.h>
#include <stdio.h>
t_list	*ft_lst_create(int val);
void	ft_lst_pushfront(t_list **lst, t_list	*my_new);
void	ft_lst_pushback(t_list **lst, t_list *my_new);
void	ft_lst_del(t_list **lst);
#endif
