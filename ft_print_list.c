/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onelda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:14:13 by onelda            #+#    #+#             */
/*   Updated: 2022/02/21 16:14:15 by onelda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_list(t_list *lst)
{
	while (lst)
	{
		printf("%d ", lst->val);
		lst = lst->previous;
	}
	printf("\n");
}

void	ft_print_list_reverse(t_list *lst)
{
	if (!lst)
		return ;
	while (lst->previous)
		lst = lst->previous;
	while (lst)
	{
		printf("%d ", lst->val);
		lst = lst->next;
	}
	printf("\n");
}
