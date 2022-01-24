#include "push_swap.h"

void	ft_swap(t_list *lst)
{
	int	tmp;

	tmp = lst->val;
	lst->val = lst->previous->val;
	lst->previous->val = tmp;
}	
