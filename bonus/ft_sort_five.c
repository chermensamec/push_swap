/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onelda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:22:40 by onelda            #+#    #+#             */
/*   Updated: 2022/02/21 16:22:41 by onelda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_straight_three(t_list **a, int *arr, t_list **b)
{
	while (ft_lst_get_len(*a) > 3)
	{
		if ((*a)->val == arr[0] || (*a)->val == arr[1])
		{
			ft_push(b, a);
			write(1, "pb\n", 3);
		}
		else
		{
			ft_rotate(a);
			write(1, "ra\n", 3);
		}
	}
	ft_sort_three_element(a, arr[2], arr[3], arr[4]);
	if ((*a)->val == arr[4])
	{
		ft_rotate(a);
		write(1, "ra\n", 3);
	}
	else
	{
		ft_reverse_rotate(a);
		write(1, "rra\n", 4);
	}
}

void	ft_sort_five(t_list **a, int *arr)
{
	t_list	*b;

	b = 0;
	ft_sort_straight_three(a, arr, &b);
	if (b->val < b->previous->val)
	{
		ft_swap(&b);
		write(1, "sb\n", 3);
	}
	ft_push(a, &b);
	ft_push(a, &b);
	write(1, "pa\npa\n", 6);
}
