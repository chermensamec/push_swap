/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onelda <onelda@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 21:30:57 by onelda            #+#    #+#             */
/*   Updated: 2022/03/02 14:48:15 by onelda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

char	*ft_strchr(const char *s, int c)
{
	while ((*s != (char) c) && *s)
	{
		s++;
	}
	if (*s != (char) c)
		return ((char *) 0);
	return ((char *)s);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	int		len;

	len = ft_strlen(src);
	if (!src || !dest || size == 0)
		return (len);
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

char	*ft_strdup(const char *s)
{
	char	*res;

	res = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!res)
		return (0);
	ft_strlcpy(res, s, ft_strlen(s) + 1);
	return (res);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*res;
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	res = (char *) malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (0);
	while (*s1)
		res[i++] = *s1++;
	while (*s2)
		res[i++] = *s2++;
	res[i] = '\0';
	return (res);
}
