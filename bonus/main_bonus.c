#include "push_swap_bonus.h"

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

void	ft_free_listarr_bonus(t_list **a, t_list **b, int *sort_arr)
{
	while (*b)
		ft_lst_del(b);
	while (*a)
		ft_lst_del(a);
	free(sort_arr);
}

int	ft_read_operations(t_list **a, t_list **b)
{
	char	operation[4];
	char	c;
	int		i;

	i = 0;
	while (read(1, &c, 1))
	{
		if (c == '\n')
		{
			if (ft_check_operation(operation, a, b))
				return (1);
			i = 0;
			operation[2] = 0;
		}
		else
			operation[i++] = c;
		if (i == 4)
			return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	t_list	*a;
	int		*arr;
	t_list	*b;

	if (argc == 1)
		return (0);
	b = 0;
	a = ft_filling_stack(argc, argv);
	arr = ft_get_sort_arr(a);
	if (ft_read_operations(&a, &b))
		ft_error_bonus(&a, &b, arr);
	if (!ft_check_sort(a, arr) || b)
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
	ft_free_listarr_bonus(&a, &b, arr);
}
