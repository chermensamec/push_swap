/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onelda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:11:07 by onelda            #+#    #+#             */
/*   Updated: 2022/02/25 17:37:45 by onelda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

t_list	*ft_lst_create(int val)
{
	t_list	*new_list;

	new_list = (t_list *) malloc(sizeof(t_list));
	if (!new_list)
		exit(1);
	new_list->val = val;
	new_list->next = 0;
	new_list->previous = 0;
	new_list->rra = 0;
	new_list->rrb = 0;
	new_list->rrr = 0;
	new_list->ra = 0;
	new_list->rb = 0;
	new_list->rr = 0;
	return (new_list);
}
