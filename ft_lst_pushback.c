#include "push_swap.h"

void	ft_lst_pushback(t_list **lst, t_list *new)
{
	t_list	*head;
	if (!new)
		return ;	
	if (!*lst)
	{	
		*lst = new;
		return ;
	}
	head = *lst;
	while (head->previous)
		head = head->previous;	
	head->previous = new;
	new->next = head;
	new->previous = 0;
}
