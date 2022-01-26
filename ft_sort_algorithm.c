#include "push_swap.h"

void	ft_sort_algorithm(t_list **a)
{
	t_list	*b;
	int	tmp;

	b = 0;
	ft_push(&b, a);
	while (*a)
	{
		/*if ((*a)->val > b->val && b->previous != 0) 
		{
			tmp = b->val;
			printf("1:%d\n", tmp);
			ft_rotate(&b);
			while ((*a)->val < b->val && b->val != tmp)
				ft_rotate(&b);
		}*/
		printf("%d %d %p\n", (*a)->val, b->val, b->previous);
		if ((*a)->val < b->val && b->previous != 0) 
		{	
			tmp = b->val;
			ft_reverse_rotate(&b);
			while ((*a)->val < b->val && b->val != tmp)
				ft_reverse_rotate(&b);
			
			ft_print_list(b);
		}
		ft_push(&b, a);
		if (b->previous == 0 && b->val < b->previous->val)
		{
			ft_swap(b);
		}
		
	}
	ft_print_list(b);
}
