/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onelda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:15:37 by onelda            #+#    #+#             */
/*   Updated: 2022/02/22 17:45:35 by chermen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_list **lst)
{
	t_list	*tmp;
	t_list	*head;
	
	if (!(*lst))
		ft_error();
	head = (*lst);
	while (head->previous)
		head = head->previous;
	tmp = head;
	head = head->next;
	head->previous = 0;
	(*lst)->next = tmp;
	tmp->previous = (*lst);
	(*lst) = tmp;
	tmp->next = 0;
}
