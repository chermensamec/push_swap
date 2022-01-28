#include "push_swap.h"


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
	//ft_reverse_rotate(&a);
	//ft_print_list(a);
	//ft_print_list_reverse(a);
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
	//ft_sort_algorithm(a);
	int	*arr;
	arr = ft_make_sort_arr(a);
	for (int i = 0; i < ft_lst_get_len(a); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	ft_sort_algorithm(&a);
	//ft_print_list(a);
	//ft_reverse_rotate(&a);
	//ft_print_list(a);
	//ft_push(&a, &y);
	//ft_print_list(y);
	return (0);	
}
