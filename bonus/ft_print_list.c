#include "push_swap.h"

void	ft_print_list(t_list *lst)
{
	while (lst)
	{
		printf("%d ", lst->val);
		lst = lst->previous;
	}
	printf("\n");
}

void	ft_print_list_reverse(t_list *lst)
{
	if (!lst)
		return ;
	while (lst->previous)
		lst = lst->previous;
	while (lst)
	{
		printf("%d ", lst->val);
		lst = lst->next;
	}
	printf("\n");
}
