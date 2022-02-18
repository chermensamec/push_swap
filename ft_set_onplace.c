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
	
//printf("ra = %d rra = %d  rb = %d  rrb = %d\n", belem->ra, belem->rra, belem->rb, belem->rrb);
	while (belem->rrr--)
	{
		ft_reverse_rotate(a);
		ft_reverse_rotate(b);	
		write(1, "rrr\n", 4);
	}
	while (belem->rr--)
	{
		ft_rotate(a);
		ft_rotate(b);
		write(1, "rr\n", 3);
	}
	while (belem->ra--)
	{
		ft_rotate(a);	
		write(1, "ra\n", 3);
	}
	while (belem->rb--)
	{
		ft_rotate(b);	
		write(1, "rb\n", 3);
	}
	while (belem->rra--)
	{
		ft_reverse_rotate(a);	
		write(1, "rra\n", 4);
	}
	while (belem->rrb--)
	{
		ft_reverse_rotate(b);
		write(1, "rrb\n", 4);
	}
	ft_push(a, b);
	write(1, "pb\n", 3);
	ft_makenull_field(*b);
	return ;
}
