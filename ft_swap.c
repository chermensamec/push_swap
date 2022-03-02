/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onelda <onelda@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:26:29 by onelda            #+#    #+#             */
/*   Updated: 2022/03/02 15:38:44 by onelda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list **lst)
{
	t_list	*tmp;
	t_list	*head;

	head = *lst;
	if (!(*lst) || !(*lst)->previous)
		return ;
	tmp = (*lst)->previous;
	if ((*lst)->previous->previous)
	{
		head->previous = (*lst)->previous->previous;
		head->previous->next = head;
	}
	else
		head->previous = 0;
	tmp->next = 0;
	tmp->previous = head;
	head->next = tmp;
	(*lst) = tmp;
}	
