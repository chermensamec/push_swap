#include "push_swap.h"

void	ft_swap(t_list **lst)
{
	t_list	*tmp;
	t_list	*head;

	head = *lst;
	if (!(*lst)->previous)
	   return ;	
	tmp = (*lst)->previous;
	
	//(*lst)->previous = (*lst);
	//(*lst)->previous->previous = tmp->previous;
	//(*lst)->previous->next = tmp;;
	//(*lst)->next = 0;	
	head->previous = (*lst)->previous->previous;
	if ((*lst)->previous->next)
		head->previous->next = head;
	tmp->next = 0;
	tmp->previous = head;
	head->next = tmp;
	(*lst) = tmp;
}	
