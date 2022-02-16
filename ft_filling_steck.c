#include "push_swap.h"

void ft_error()
{
	write(2, "Error", 5);
	exit(1);
}

void	check(char	*str)
{
	int	conter;
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (ft_strlen(str) == 1)
			ft_error();
		i++;
	}
	while (str[i])
	{
		if(!(str[i] >= '0' && str[i] <= '9'))
			ft_error();
		i++;
	}
}

t_list	*ft_filling_stack(int argc, char *argv[])
{
	int		i;
	t_list	*head;
	t_list	*tmp;
	int		val;
	char	**res;

	head = 0;
	i = 0;
	while ( i != argc - 1)
	{

		i++;
		res = ft_split(argv[i], ' ');
		while (*res)
		{
			check(*res);
			val = ft_atoi(*res);
			tmp = ft_lst_create(val);
			ft_lst_pushback(&head, tmp);
			res++;
		}
	}
	return (head); 
}
