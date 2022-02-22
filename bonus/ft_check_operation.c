#include "push_swap.h"

void	ft_check_reverse(char *operation, t_list **a, t_list **b)
{
	if (operation[1] == 'r' && operation[2] == 'r')
	{
		ft_reverse_rotate(a);
		ft_reverse_rotate(b);
	}
	else if (operation[1] == 'r' && operation[2] == 'a')
		ft_reverse_rotate(a);
	else if (operation[1] == 'r' && operation[2] == 'b')
		ft_reverse_rotate(b);
	else if (operation[1] == 'r')
	{
		ft_rotate(a);
		ft_rotate(b);
	}
	else if (operation[1] == 'a')
		ft_rotate(a);
	else if (operation[1] == 'b')
		ft_rotate(b);
	else
		exit(1);
}

void	ft_check_push(char *operation, t_list **a, t_list **b)
{
	if (operation[1] == 's')
	{
		ft_swap(a);
		ft_swap(b);
	}
	else if (operation[1] == 'a')
		ft_swap(a);
	else if (operation[1] == 'b')
		ft_swap(b);
	else
		exit(1);
}

void	ft_check_operation(char *operation, t_list **a, t_list **b)
{
	if (operation[0] == 'r')
		ft_check_reverse(operation, a, b);
	else if (operation[0] == 'p')
	{
		if (operation[1] == 'a')
			ft_push(a, b);
		else if (operation[1] == 'b')
			ft_push(b, a);
		else
			exit(1);
	}
	else if (operation[0] == 's')
		ft_check_push(operation, a, b);
	else
		exit(1);
}
