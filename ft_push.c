#include "push_swap.h"

void	ft_push(t_list **a, t_list **b)
{
	t_list	*tmp;
	
	if (!*b)
		return ;	
	tmp = (*b)->previous;
	ft_lst_pushfront(a, (*b));
	*b = tmp;
}
