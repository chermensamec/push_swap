#include "push_swap.h"

void	ft_find_place(t_list **a, t_list **b)
{
	int		min;
	int		place;
	t_list	*head;

	min = (*a)->val;
	place = 0;
	head = *a;
	while (head->previous)
	{
		if (head->val < min)
			min = head->val;
			place += 1;
	}
	if (place == 1)
		ft_swap(*a);
	else if (place > ft_lst_get_len(*a) / 2)
		while (place-- != 0)
			ft_reverse_rotate(a);
	else
		while (place-- != 0)
			ft_rotate(a);
}
