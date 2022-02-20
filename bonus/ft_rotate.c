#include "push_swap.h"

void	ft_rotate(t_list **lst)
{
	t_list	*tmp;
	t_list	*head;
	
	if (!(*lst)->previous)
		return ;
	head = (*lst);
	tmp = (*lst);
	*lst = (*lst)->previous;
	(*lst)->next = 0;
	while (head->previous)
		head =  head->previous;
	head->previous = tmp;
	tmp->next = head;
	tmp->previous = 0;
}
