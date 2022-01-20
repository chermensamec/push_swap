#include <stdio.h>
#include "ft_push_swap.h"

int main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;
	t_list	*d;
	t_list	*e;

	a = ft_lst_create(45);
	b = ft_lst_create(2312);	
	c = ft_lst_create(20);
	d = ft_lst_create(202);		
	e = ft_lst_create(312);	
	
	ft_lst_pushfront(&a, b);
	ft_lst_pushfront(&a, c);
	ft_lst_pushfront(&a, d);	
	ft_lst_pushback(&a, e);
	//ft_lst_del(&a);
	printf("%d\n", a->val);//b->previous->previous->val);
	return (0);	
}
