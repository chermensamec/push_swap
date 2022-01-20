#include "ft_push_swap.h"

void	ft_lst_pushfront(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;	
	new->previous = *lst;
	*lst = new;
}
