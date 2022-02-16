#include "push_swap.h"
#include <stdlib.h>

t_list	*ft_lst_create(int val)
{
	t_list	*new_list;
	int	i;

	new_list = (t_list *) malloc(sizeof(t_list));
	if (!new_list)
		return new_list;
	new_list->val = val;
	new_list->next = 0;
	new_list->previous = 0;
	new_list->rra = 0;
	new_list->rrb = 0;
	new_list->rrr = 0;
	new_list->pb = 0;
	new_list->pa = 0;
	new_list->ra = 0;
	new_list->rb = 0;
	new_list->rr = 0;
	new_list->is_stack_a = 1;	
	return (new_list);
}
