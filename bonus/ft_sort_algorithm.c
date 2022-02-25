/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_algorithm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onelda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:21:59 by onelda            #+#    #+#             */
/*   Updated: 2022/02/25 17:32:10 by onelda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three_element(t_list **lst, int min, int mid, int max)
{
	if ((*lst)->val == mid && (*lst)->previous->val == min)
	{
		ft_reverse_rotate(lst);
		ft_swap(lst);
		write(1, "rra\nsa\n", 7);
	}
	else if ((*lst)->val == min)
	{
		if ((*lst)->previous->val == max)
		{
			ft_swap(lst);
			write(1, "sa\n", 3);
		}
		else
		{
			ft_reverse_rotate(lst);
			write(1, "rra\n", 4);
		}
	}
	else if ((*lst)->val == max && (*lst)->previous->val != min)
	{
		ft_swap(lst);
		write(1, "sa\n", 3);
	}
}

t_list	*ft_filling_stackb(t_list **lst, int min, int mid, int max)
{
	t_list	*b;

	b = 0;
	while (ft_lst_get_len((*lst)) > 3)
	{
		if ((*lst)->val != min && (*lst)->val != max
			&& (*lst)->val != mid)
		{
			ft_push(&b, lst);
			write(1, "pb\n", 3);
			if (b->val > mid)
			{
				ft_rotate(&b);
				write(1, "rb\n", 3);
			}
		}
		else
		{
			ft_rotate(lst);
			write(1, "ra\n", 3);
		}
	}
	ft_sort_three_element(lst, min, mid, max);
	return (b);
}

void	ft_sort_algorithm(t_list **lst, int *sort_arr)
{
	int		min;
	int		max;
	int		mid;
	t_list	*b;

	b = 0;
	min = sort_arr[0];
	max = sort_arr[ft_lst_get_len(*lst) - 1];
	mid = sort_arr[(ft_lst_get_len(*lst) - 1) / 2];
	b = ft_filling_stackb(lst, min, mid, max);
	ft_sort_push_swap(lst, &b);
}
