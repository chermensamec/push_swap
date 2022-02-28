/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onelda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:16:07 by onelda            #+#    #+#             */
/*   Updated: 2022/02/21 16:16:08 by onelda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_rotate(t_list **lst)
{
	t_list	*tmp;
	t_list	*head;

	if (!*lst || !(*lst)->previous)
		return ;
	head = (*lst);
	tmp = (*lst);
	*lst = (*lst)->previous;
	(*lst)->next = 0;
	while (head->previous)
		head = head->previous;
	head->previous = tmp;
	tmp->next = head;
	tmp->previous = 0;
}
