/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_sort_arr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onelda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:10:25 by onelda            #+#    #+#             */
/*   Updated: 2022/02/21 16:10:26 by onelda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_int_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	*ft_get_arr(t_list *lst)
{
	int	*arr;
	int	len;
	int	i;

	i = 0;
	len = ft_lst_get_len(lst);
	arr = (int *)malloc (sizeof(int) * (ft_lst_get_len(lst)));
	if (!arr)
		return (0);
	while (i < len)
	{
		arr[i++] = lst->val;
		lst = lst->previous;
	}
	return (arr);
}

int	ft_partition(int *arr, int low, int high)
{
	int	pivot;
	int	wall;
	int	j;

	j = low;
	wall = low - 1;
	pivot = arr[high];
	while (j < high)
	{
		if (arr[j] < pivot)
		{
			wall++;
			ft_int_swap(&arr[wall], &arr[j]);
		}
		j++;
	}
	ft_int_swap(&arr[wall + 1], &arr[high]);
	return (wall + 1);
}

void	ft_quick_sort(int *arr, int low, int high)
{
	int	pivot;

	if (low < high)
	{
		pivot = ft_partition(arr, low, high);
		ft_quick_sort(arr, low, pivot - 1);
		ft_quick_sort(arr, pivot + 1, high);
	}
}

int	*ft_get_sort_arr(t_list *lst)
{
	int	*arr;

	arr = ft_get_arr(lst);
	ft_quick_sort(arr, 0, ft_lst_get_len(lst) - 1);
	return (arr);
}
