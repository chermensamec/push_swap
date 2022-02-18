#include "push_swap.h"

t_list	*ft_get_last(t_list *lst)
{
	while (lst->previous)
		lst = lst->previous;
	return (lst);
}

void	ft_sort_three_element(t_list **lst, int min, int mid, int max)
{
	if ((*lst)->val == mid && (*lst)->previous->val == min)
	{

		ft_reverse_rotate(lst);	
		ft_swap(lst);
		write(1, "rra\nsa\n", 7);	
	}
	else if ((*lst)->val == min)
	{
		if ((*lst)->previous->val == max)
		{
			ft_swap(lst);
			write(1, "sa\n", 3);
		}
		else
		{
			ft_reverse_rotate(lst);	
			write(1, "rra\n", 4);
		}
	}
	else if ((*lst)->val == max && (*lst)->previous->val != min)
	{
			ft_swap(lst);	
			write(1, "sa\n", 3);
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
		{
			ft_push(&b, lst);
			write(1, "pb\n", 3);
		}
		else
		{
			ft_rotate(lst);
			write(1, "ra\n", 3);
		}
	}
	ft_sort_three_element(lst, min, mid, max);
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
	//ft_print_list(b);	
	//ft_print_list_reverse(b);	
	//ft_print_list(*lst);
	
	ft_sort_push_swap(lst, &b);
	//ft_print_list_reverse(*lst);
	//printf("len%d\n", ft_lst_get_len(b));
	//printf("min = %d mid = %d  max = %d\n", min, mid, max);		
//	ft_print_list(*lst);
}
