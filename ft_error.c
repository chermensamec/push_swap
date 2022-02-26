/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onelda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:02:31 by onelda            #+#    #+#             */
/*   Updated: 2022/02/26 14:48:11 by chermen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_error_filling(char **res, t_list *a, int j)
{
	while (res[j])
		free(res[j++]);
	free(res);
	while (a)
		ft_lst_del(&a);
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_error_bonus(t_list **a, t_list **b, int *sort_arr)
{
	while (*a)
		ft_lst_del(a);
	while (*b)
		ft_lst_del(b);
	free(sort_arr);
	write(2, "Error\n", 6);
	exit(1);
}
