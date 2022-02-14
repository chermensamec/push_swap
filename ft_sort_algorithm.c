#include "push_swap.h"

t_list	*ft_get_last(t_list *lst)
{
	while (lst->previous)
		lst = lst->previous;
	return (lst);
}

void	ft_sort_three_element(t_list **lst)
{
	if ((*lst)->val == mid)
	{
		if ((*lst)->prev->val != min)
		{
			ft_rotate(lst);
		}
	}
}

t_list	*ft_filling_stackB(t_list **lst, int min, int mid, int max)
{
	t_list	*b;

	b = 0;
	while (ft_lst_get_len((*lst)) > 3)
	{
		if ((*lst)->val != min && (*lst)->val != max &&
				(*lst)->val != mid)
			ft_push(&b, lst);
		else
			ft_rotate(lst);
	}
	return (b);
}

void	ft_sort_algorithm(t_list **lst)
{
	int	min;
	int	max;
	int	mid;
	t_list	*b;

	b = 0;
	min = ft_make_sort_arr(*lst)[0];
	max = ft_make_sort_arr(*lst)[ft_lst_get_len(*lst) - 1];	
	mid = ft_make_sort_arr(*lst)[(ft_lst_get_len(*lst) - 1) / 2];
	b = ft_filling_stackB(lst, min, mid,max);
	ft_print_list(b);	
	ft_print_list(*lst);
	printf("min = %d mid = %d  max = %d", min, mid, max);
}
