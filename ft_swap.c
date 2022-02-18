#include "push_swap.h"

void	ft_swap(t_list **lst)
{
	t_list	*tmp;
	t_list	*head;

	head = *lst;
	if (!(*lst)->previous)
	   return ;	
	tmp = (*lst)->previous;
	if ((*lst)->previous->previous)
	head->previous = (*lst)->previous->previous;
	if ((*lst)->previous->next)
		head->previous->next = head;
	tmp->next = 0;
	tmp->previous = head;
	head->next = tmp;
	(*lst) = tmp;
}	
