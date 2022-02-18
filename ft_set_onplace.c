#include "push_swap.h"

void	ft_makenull_field(t_list *b)
{
	while (b)
	{
		b->rrr = 0;
		b->rra = 0;
		b->rrb = 0;
		b->rr = 0;
		b->ra = 0;
		b->rb = 0;
		b = b->previous;
	}
}

void	ft_set_onplace(t_list **a, t_list **b, t_list *belem)
{
	while (belem->rrr--)
	{
		ft_reverse_rotate(a);
		ft_reverse_rotate(b);
	}
	while (belem->rr--)
	{
		ft_rotate(a);
		ft_rotate(b);
	}
	while (belem->ra--)
		ft_rotate(a);
	while (belem->rb--)
		ft_rotate(b);
	while (belem->rra--)
		ft_rotate(a);
	while (belem->rrb--)
		ft_rotate(b);
	ft_push(a, b);
	ft_makenull_field(*b);
	return ;
}
