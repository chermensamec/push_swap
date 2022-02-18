#include "push_swap.h"

int	ft_lst_get_len(t_list	*lst)
{
	int	i;

	i = 0;
	while (lst->next)
		lst = lst->next;
	while (lst)
	{
		i++;
		lst = lst->previous;
	}
	return (i);
}
