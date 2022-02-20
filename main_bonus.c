#include "push_swap.h"

void	ft_check_operation(char *buff, t_list **b, t_list **a)
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
			ft_reverse_rotate(a);
		else if (buff[1] == 'b')
			ft_reverse_rotate(b);
	}
	else if (buff[0] == 'p')
	{
		if (buff[1] == 'a')
			ft_push(a);
		else
			ft_push(b);
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
	exit(1);
}

int main(int argc, char *argv[])
{
	t_list	*a;
	char	*buff;
	int	i;
	char	c;

	//a = ft_filling_stack(argc, argv);
	while (read(1, &c, 1))
	{
		buff[i] = c;
		if (c == 'a' || c == 'b')
			ft_check_operation(buff);
	}
}