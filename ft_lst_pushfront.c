#include "push_swap.h"

void	ft_lst_pushfront(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;	
	(*lst)->next = new;
	new->previous = *lst;
	*lst = new;
}
