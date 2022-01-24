#include "push_swap.h"

void	ft_reverse_rotate(t_list **lst)
{
	t_list	*tmp;
	t_list	*head;

	head = (*lst);
	while (head->previous)
		head =  head->previous;
	tmp = head;
	head = head->next;
	head->previous = 0;
	(*lst)->next = tmp;	
	tmp->previous = (*lst);
	(*lst) = tmp;
	tmp->next = 0;
}
