#include "push_swap.h"

void	ft_check_sort(t_list *a, int *sort_arr)
{
	while (a)
	{
		if (a->val != (*sort_arr++))
		       return ;
		a = a->previous;
	}
	exit(0);
}

int main(int argc, char *argv[])
{
	t_list	*a;
	t_list	*head;
	int	*sort_arr;
	if (argc == 1)
		return (0);
	a = ft_filling_stack(argc, argv);
	sort_arr = ft_get_sort_arr(a);
	ft_check_sort(a, sort_arr);
	if (ft_lst_get_len(a) == 2)
		write(1, "ra\n", 3);
	else 
		ft_sort_algorithm(&a, sort_arr);
	while(*sort_arr != a->val)
	{
		ft_reverse_rotate(&a);
		write(1, "rra\n", 4);
	}
	ft_print_list(a);
	return (0);	
}
