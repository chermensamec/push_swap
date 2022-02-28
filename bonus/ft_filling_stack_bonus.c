/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filling_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onelda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:07:14 by onelda            #+#    #+#             */
/*   Updated: 2022/02/26 14:48:58 by chermen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_check_wrong_symbol(char	*str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (ft_strlen(str) == 1)
			return (1);
		i++;
	}
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_repeat(t_list *head, t_list *current)
{
	while (head)
	{
		if (head->val == current->val)
			return (1);
		head = head->previous;
	}
	return (0);
}

void	ft_loop_filling(char **str, t_list **head, int j)
{
	t_list	*current;

	if (ft_check_wrong_symbol(str[j]) || ft_check_minmax(str[j]))
		ft_error_filling(str, *head, j);
	current = ft_lst_create(ft_atoi(str[j]));
	if (ft_check_repeat(*head, current))
	{
		free(current);
		ft_error_filling(str, *head, j);
	}
	ft_lst_pushback(head, current);
	free(str[j]);
}

t_list	*ft_filling_stack(int argc, char *argv[])
{
	int		i;
	int		j;
	char	**res;
	t_list	*head;

	head = 0;
	i = 0;
	while (i != argc - 1)
	{
		i++;
		j = 0;
		res = ft_split(argv[i], ' ');
		if (*res == 0)
			ft_error_filling(res, head, 0);
		while (res[j])
			ft_loop_filling(res, &head, j++);
		if (*res)
			free(res);
	}
	return (head);
}
