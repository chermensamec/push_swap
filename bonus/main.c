#include "push_swap.h"

int	ft_check_sort(t_list *a, int *sort_arr)
{
	while (a)
	{
		if (a->val != (*sort_arr++))
			return (0);
		a = a->previous;
	}
	return (1);
}

void	ft_free_listarr(t_list **a, int *sort_arr)
{
	while (*a)
		ft_lst_del(a);
	free(sort_arr);
}

void	ft_read_operations(t_list **a, t_list **b)
{
	char	operation[4];
	char	*c;
	int		i;

	i = 0;
	while (read(1, &c, 1))
	{
		if (c == '\n')
		{
			ft_check_operation(operation, a, b);
			i = 0;
		}
		else
			operation[i++] = c;
		if (i == 4)
			ft_error();
	}
}

int	main(int argc, char *argv[])
{
	t_list	*a;
	int		*arr;
	t_list	*b;

	b = 0;
	a = ft_filling_stack(argc, argv);
	arr = ft_get_sort_arr(a);
	ft_read_operations(&a, &b);
	if (!ft_check_sort(a, arr))
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
	ft_print_list(a);
	ft_free_listarr(&a, arr);
}
