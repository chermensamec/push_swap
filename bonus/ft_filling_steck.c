#include "push_swap.h"

void	ft_check_wrong_symbol(char	*str)
{
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

void ft_check_repeat(t_list *head, t_list *current)
{
	while (head)
	{
		if (head->val == current->val)
			ft_error();
		head = head->previous;
	}
}

t_list	*ft_filling_stack(int argc, char *argv[])
{
	int		i;
	t_list	*head;
	t_list	*current;
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
			ft_check_wrong_symbol(*res);
			val = ft_atoi(*res);
			current = ft_lst_create(val);	
			ft_check_repeat(head, current);
			ft_lst_pushback(&head, current);
			res++;
		}
	}
	return (head); 
}
