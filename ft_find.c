#include "push_swap.h"

void	ft_optimize(t_list *b)
{

//printf("ra = %d rra = %d  rb = %d  rrb = %d rr = %d rrr = %d\n", b->ra, b->rra, b->rb, b->rrb, b->rr, b->rrr);
	while (b->ra && b->rb)
	{
		b->ra -= 1;
		b->rb -= 1;
		b->rr += 1;
	}
	while (b->rra && b->rrb)
	{
		b->rra -= 1;
		b->rrb -= 1;
		b->rrr += 1;
	}

//printf("ra = %d rra = %d  rb = %d  rrb = %d rr = %d rrr = %d\n", b->ra, b->rra, b->rb, b->rrb, b->rr, b->rrr);
}

void	ft_count_operations(t_list *a, t_list *b, int place_a, int place_b)
{
	//printf("%d %d %d %d\n", place_a, ft_lst_get_len(a) / 2, place_b, ft_lst_get_len(b) / 2);
	if (place_a <= ft_lst_get_len(a) / 2)
	{
		while (place_a--)
			b->ra += 1;
	}
	else
	{
		while (place_a++ != ft_lst_get_len(a)) 
			b->rra += 1;
	}
	if (place_b <= ft_lst_get_len(b) / 2)
	{
		while (place_b--)
			b->rb += 1;
	}
	else
	{
		while (place_b++ != ft_lst_get_len(b))
			b->rrb += 1;
	}
	ft_optimize(b);
}	

void	ft_find_place(t_list *a, t_list *b, int place_b)
{
	int		min;
	int		place_a;
	int		count;
	t_list		*head;
	
	count = 0;
	min = 2147483647;
	head = a;
	while (head)
	{	
		//printf("%d %d %d %d\n", head->val, min, b->val, head->val);
		if (head->val < min && b->val < head->val)
		{	
			place_a = count;	
			min = head->val;
			printf("find for %d: %d\n", b->val, head->val);	
		}
		count += 1;
		printf("%p ", head->);
		head = head->previous;
	}
	ft_count_operations(a, b, place_a, place_b);
}

int	ft_get_sum_action(t_list *b)
{
	return (b->rra + b->rrb + b->ra + b->rb + b->rr + b->rrr);
}

t_list *ft_get_fastelem(t_list *b)
{
	int	min;
	t_list	*tmp;

	min = 2147483647;
	while (b)
	{
		if (ft_get_sum_action(b) < min)
		{
			tmp = b;
			min = ft_get_sum_action(b); 
		}
		b = b->previous;
	}
	return (tmp);
}

void	ft_sort_push_swap(t_list **a, t_list **b)
{
	int	len;
	int	count_b;
	t_list	*head;

	count_b = 0;
	head = *b;
	while (*b)
	{
		while (head)
		{
		//printf("val: %d\n", head->val);
			ft_find_place(*a, head, count_b);
			count_b += 1;
			//printf("ra = %d rra = %d  rb = %d  rrb = %d\n", head->ra, head->rra, head->rb, head->rrb);
			head = head->previous;
		}
		//printf("%d\n", ft_get_fastelem(*b)->val);
		ft_set_onplace(a, b, ft_get_fastelem(*b));
		ft_print_list(*a);
		head = *b;
		printf("val: %d\n", head->val);
	}
}
