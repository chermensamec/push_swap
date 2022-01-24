#include "push_swap.h"

int ft_atoi(const char *str)
{
	int	res;
	int	k;

	res = 0;
	k = 1;
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
