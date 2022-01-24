#include "push_swap.h"
#include <stdlib.h>

t_list	*ft_lst_create(int val)
{
	t_list	*new_list;
	new_list = (t_list *) malloc(sizeof(*new_list));
	if (!new_list)
		return new_list;
	new_list->val = val;
	new_list->next = 0;
	new_list->previous = 0;
	return (new_list);
}
