#include "push_swap.h"

void	ft_lst_del(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	*lst = (*lst)->previous;
	(*lst)->next = 0;
	free((*lst)->operations);
	free(tmp);
}
