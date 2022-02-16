#include "push_swap.h"

void	ft_find_place(t_list **a, t_list *b)
{
	int		min;
	int		count;
	t_list	*head;
	t_list	*place;
	
	min = 2173213;
	place = (*a);
	count = 0;
	head = *a;
	while (head->previous)
	{	
		if (head->val < min && b->val < head->val)
		{
			place = head;
			min = head->val;
			count += 1;	
			printf("find: %d\n", place->val);
		}
		head = head->previous;
	}
	printf("find: %d\n", place->val);
}
