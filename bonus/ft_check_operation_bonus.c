/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_operation_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onelda <onelda@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:39:07 by onelda            #+#    #+#             */
/*   Updated: 2022/03/02 15:39:08 by onelda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_check_reverse(char *operation, t_list **a, t_list **b)
{
	if (!ft_strcmp(operation, "rrr"))
	{
		ft_reverse_rotate(a);
		ft_reverse_rotate(b);
	}
	else if (!ft_strcmp(operation, "rra"))
		ft_reverse_rotate(a);
	else if (!ft_strcmp(operation, "rrb"))
		ft_reverse_rotate(b);
	else if (!ft_strcmp(operation, "rr"))
	{
		ft_rotate(a);
		ft_rotate(b);
	}
	else if (!ft_strcmp(operation, "ra"))
		ft_rotate(a);
	else if (!ft_strcmp(operation, "rb"))
		ft_rotate(b);
	else
		return (1);
	return (0);
}

int	ft_check_push(char *operation, t_list **a, t_list **b)
{	
	if (!ft_strcmp(operation, "ss"))
	{
		ft_swap(a);
		ft_swap(b);
	}
	else if (!ft_strcmp(operation, "sa"))
		ft_swap(a);
	else if (!ft_strcmp(operation, "sb"))
		ft_swap(b);
	else
		return (1);
	return (0);
}

int	ft_check_operation(char *operation, t_list **a, t_list **b)
{
	if (operation[0] == 'r')
		return (ft_check_reverse(operation, a, b));
	else if (operation[0] == 'p')
	{
		if (!ft_strcmp(operation, "pa"))
			ft_push(a, b);
		else if (!ft_strcmp(operation, "pb"))
			ft_push(b, a);
		else
			return (1);
	}
	else if (operation[0] == 's')
		return (ft_check_push(operation, a, b));
	else
		return (1);
	return (0);
}
