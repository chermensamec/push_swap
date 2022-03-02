/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onelda <onelda@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:39:48 by onelda            #+#    #+#             */
/*   Updated: 2022/03/02 16:17:31 by onelda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_check_sort(t_list *a, int *sort_arr)
{
	while (a)
	{
		if (a->val != (*sort_arr++))
			return (0);
		a = a->previous;
	}
	return (1);
}

void	ft_free_listarr_bonus(t_list **a, t_list **b, int *sort_arr)
{
	while (*b && b != 0)
		ft_lst_del(b);
	while (*a && a != 0)
		ft_lst_del(a);
	free(sort_arr);
}

int	ft_read_operations(t_list **a, t_list **b)
{
	char	*operation;

	operation = get_next_line(0);
	while (operation)
	{
		operation[ft_strlen(operation) - 1] = 0;
		if (ft_check_operation(operation, a, b))
		{
			if (operation)
				free(operation);
			return (1);
		}
		if (operation)
			free(operation);
		operation = get_next_line(0);
	}
	if (operation)
		free(operation);
	return (0);
}

int	main(int argc, char *argv[])
{
	t_list	*a;
	int		*arr;
	t_list	*b;

	if (argc == 1)
		return (0);
	b = 0;
	a = ft_filling_stack(argc, argv);
	arr = ft_get_sort_arr(a);
	if (ft_read_operations(&a, &b))
		ft_error_bonus(&a, &b, arr);
	if (!ft_check_sort(a, arr) || b)
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
	ft_free_listarr_bonus(&a, &b, arr);
}
