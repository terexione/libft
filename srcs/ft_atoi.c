#include "../includes/libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (nptr[i] && ((nptr[i] > 6 && nptr[i] < 14) || nptr[i] == 32))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		res = (res * 10) + (nptr[i++] - '0');
	return (res * sign);
}