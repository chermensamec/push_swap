#include "push_swap.h"

void	ft_check_operation(char *buff, t_list **a, t_list **b)
{
	if (buff[0] == 'r')
	{
		if (buff[1] == 'r' && buff[2] == 'r')
		{
			ft_reverse_rotate(a);
			ft_reverse_rotate(b);
		}
		else if (buff[1] == 'r' && buff[2] == 'a')	
			ft_reverse_rotate(a);
		else if (buff[1] == 'r' && buff[2] == 'b')
			ft_reverse_rotate(b);
		else if (buff[1] == 'r')
		{
			ft_rotate(a);
			ft_rotate(b);
		}
		else if (buff[1] == 'a')
			ft_rotate(a);
		else if (buff[1] == 'b')
			ft_rotate(b);
	}
	else if (buff[0] == 'p')
	{
		if (buff[1] == 'a')
			ft_push(a, b);
		else
			ft_push(b, a);
	}
	else if (buff[0] == 's')
	{
		if (buff[1] == 's')
		{
			ft_swap(a);
			ft_swap(b);
		}
		else if (buff[1] == 'a')	
			ft_swap(a);
		else if (buff[1] == 'b')
			ft_swap(b);
	}
	else
		exit(1);
}

int main(int argc, char *argv[])
{
	t_list	*a;
	char	*operation;
	int		i;
	char	c;
	int		*arr;
	t_list	*b;

	b = 0;
	operation = malloc(sizeof(char) * 4); 
	a = ft_filling_stack(argc, argv);
	arr = ft_get_sort_arr(a);
	while (read(1, &c, 1))
	{
		if (c == '\n')
		{
			ft_check_operation(operation, &a, &b);
			i = 0;
		}
		else
			operation[i++] = c;
	}
	ft_print_list(a);
}
