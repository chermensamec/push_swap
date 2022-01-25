#include "push_swap.h"

#define INT_MIN "-2147483648"
#define INT_MAX "2147483647"
#define INT_MAX2 "+2147483647"

int	ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	ft_check_minmax (const char *str)
{
	int	len;

	len = ft_strlen(str);
	if (len == 12)
		return (1);
	else if (len == 10)
	{
		if (ft_strcmp(str, INT_MAX) > 0)
			return (1);
	}
	else if (len == 11)
	{
		if (str[0] == '-' && ft_strcmp(str, INT_MIN) > 0)
			return (1);
		if (str[0] == '+' && ft_strcmp(str, INT_MAX2) > 0)
			return (1);
	}
	return (0);
}

int ft_atoi(const char *str)
{
	int	res;
	int	k;
	
	res = 0;
	k = 1;
	if (ft_check_minmax(str))
	{
		write(1, "Incorrect input", 15);
		exit (0);
	}
	if(*str == '-' || *str == '+')
	{
		if (*str == '-')
			k = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		res = res * 10 + (int) (*(str++) - '0');
	return (res * k);
}
