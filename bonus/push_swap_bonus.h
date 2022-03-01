/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onelda <onelda@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:02:38 by onelda            #+#    #+#             */
/*   Updated: 2022/03/02 00:58:07 by chermen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_list
{
	struct s_list	*next;
	struct s_list	*previous;
	int				val;
	int				rra;
	int				rrb;
	int				rrr;
	int				ra;
	int				rb;
	int				rr;
}	t_list;

t_list	*ft_lst_create(int val);
void	ft_lst_pushfront(t_list **lst, t_list	*my_new);
void	ft_lst_pushback(t_list **lst, t_list *my_new);
void	ft_lst_del(t_list **lst);
void	ft_swap(t_list **lst);
void	ft_push(t_list **a, t_list **b);
void	ft_rotate(t_list **lst);
void	ft_reverse_rotate(t_list **lst);
char	**ft_split(char const *str, char s);
int		ft_strlen(const char *s);
int		ft_atoi(const char *s);
t_list	*ft_filling_stack(int argc, char *argv[]);
int		*ft_get_sort_arr(t_list *lst);
int		ft_lst_get_len(t_list *lst);
void	ft_error_filling(char **res, t_list *a, int j);
void	ft_error_bonus(t_list **a, t_list **b, int *sort_arr);
int		ft_check_operation(char *operation, t_list **a, t_list **b);
int		ft_check_minmax(char *str);
void	ft_free_listarr(t_list **a, int *sort_arr);
int		ft_strcmp(const char *s1, const char *s2);
#endif
