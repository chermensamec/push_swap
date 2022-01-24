#include "push_swap.h"

void	ft_push(t_list **a, t_list **b)
{
	t_list	*tmp;
	
	tmp = (*a)->previous;
	ft_lst_pushfront(b, (*a));
	*a = tmp;
}
