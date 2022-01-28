#include "push_swap.h"

t_list	*ft_get_last(t_list *lst)
{
	while (lst->previous)
		lst = lst->previous;
	return (lst);
}

void	ft_sort_algorithm(t_list **a)
{
	t_list	*b;
	int		mid;
	int		fm;
	int		fb;

	fb = 0;
	fm = 0;
	mid = ft_make_sort_arr(*a)[ft_lst_get_len(*a) / 2];
	ft_push(&b, a);
	while (*a)
	{
		if ((*a)->val < mid)
		{
			while (ft_get_last(b)->val > mid && fm)
				ft_lst_reverse_rotate(b);
			if (b->val < (*a)->val && ft_get_last(b)->val > (*a)->val)
				ft_push(&b, a);
			else if (b->val > (*a)->val && b->val < mid) 
			{
				while (b->val > (*a)->val && b->val < mid)
					ft_lst_rotate(b);
				ft_push(&b, a);
			}
			else if (b->val > mid)
			{
				while (b->val > a->val && fm)	
					ft_lst_reverse_rotate(b);
				ft_push(&b, a);
			}
			f = 1;
			else
			{
				while (
			}
		}
	}
}

