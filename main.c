#include "push_swap.h"

void	ft_print_list(t_list *lst)
{
	while (lst)
	{
		printf("%d ", lst->val);
		lst = lst->previous;
	}
	printf("\n");
}

void	ft_print_list_reverse(t_list *lst)
{
	while (lst->previous)
		lst = lst->previous;
	while (lst)
	{
		printf("%d ", lst->val);
		lst = lst->next;
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	t_list	*a;
	t_list	*b;
	t_list	*c;
	t_list	*d;
	t_list	*e;
	t_list	*y;
	int		i;
	char	**res;
	int		tmp;

	a = ft_lst_create(1);
	b = ft_lst_create(2);	
	c = ft_lst_create(3);
	d = ft_lst_create(4);		
	e = ft_lst_create(5);	
	y = ft_lst_create(6);	
	
	ft_lst_pushfront(&a, b);
	ft_lst_pushfront(&a, c);
	ft_lst_pushfront(&a, d);	

	ft_lst_pushfront(&y, e);

	//ft_lst_del(&a);
	ft_reverse_rotate(&a);
	ft_print_list(a);
	ft_print_list_reverse(a);
	/*while ( i != argc)
	{
		res = ft_split(argv[i], ' ');
		while (*res)
		{
			check(*res);
			tmp = ft_atoi(*res);
			printf("%d ", tmp);	
			res++;
		}
		printf("\n");
		i++;
	}*/
	a = ft_filling_stack(argc, argv);
	ft_print_list(a);
	return (0);	
}
