#include "push_swap.h"

void	ft_optimize(t_list *b)
{
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
}

void	ft_count_operations(t_list *a, t_list *b, int place_a, int place_b)
{
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
		if (head->val < min && b->val < head->val)
		{	
			place_a = count;	
			min = head->val;
		}
		count += 1;
		head = head->previous;
	}
	ft_count_operations(a, b, place_a, place_b);	
}

t_list *ft_get_fastelem(t_list *b)
{
	int	min;
	t_list	*tmp;

	min = 2147483647;
	while (b)
	{
		if (b->rra + b->rrb + b->ra + b->rb + b->rr + b->rrr < min)
		{
			tmp = b;
			min = b->rra + b->rrb + b->ra + b->rb + b->rr + b->rrr; 
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

	head = *b;
	while (*b)
	{
		count_b = 0;
		while (head)
		{
			ft_find_place(*a, head, count_b);
			count_b += 1;
			head = head->previous;
		}
		ft_set_onplace(a, b, ft_get_fastelem(*b));	
		head = *b;
	}
}
