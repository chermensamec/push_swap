/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onelda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:26:29 by onelda            #+#    #+#             */
/*   Updated: 2022/03/02 00:14:41 by chermen          ###   ########.fr       */
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
