#include "../includes/libft.h"

int					get_len(int nbr)
{
	size_t	i;

	i = 0;
	if (nbr < 0)
		i++;
	while (nbr /= 10)
		i++;
	return (i);
}

char				*ft_itoa(int nbr)
{
	char			*dest;
	unsigned int	n;
	size_t			i;

	i = get_len(nbr);
	n = nbr;
	if (nbr < 0)
		n = -nbr;
	if (!(dest = ft_strnew(i + 1)))
		return ((void*) 0);
	dest[i] = n % 10 + '0';
	while (n /= 10)
		dest[--i] = n % 10 + '0';
	if (nbr < 0)
		dest[0] = '-';
	return (dest);
}