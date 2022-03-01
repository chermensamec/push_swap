/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onelda <onelda@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:28:19 by onelda            #+#    #+#             */
/*   Updated: 2022/03/02 00:59:26 by chermen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_sort(t_list *a, int *sort_arr)
{
	int		i;
	t_list	*head;

	head = a;
	i = 0;
	while (a)
	{
		if (a->val != (sort_arr[i]))
			return ;
		a = a->previous;
		i++;
	}
	ft_free_listarr(&head, sort_arr);
	exit(0);
}

void	ft_free_listarr(t_list **a, int *sort_arr)
{
	while (*a)
		ft_lst_del(a);
	free(sort_arr);
}

int	main(int argc, char *argv[])
{
	t_list	*a;	
	int		*sort_arr;

	if (argc == 1)
		return (0);
	a = ft_filling_stack(argc, argv);
	sort_arr = ft_get_sort_arr(a);
	ft_check_sort(a, sort_arr);
	if (ft_lst_get_len(a) == 5)
		ft_sort_five(&a, sort_arr);
	else if (ft_lst_get_len(a) == 2)
	{
		write(1, "sa\n", 3);
		ft_swap(&a);
	}
	else
		ft_sort_algorithm(&a, sort_arr);
	while (*sort_arr != a->val)
	{
		ft_reverse_rotate(&a);
		write(1, "rra\n", 4);
	}
	ft_free_listarr(&a, sort_arr);
	return (0);
}
