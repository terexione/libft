#include "../includes/libft.h"

void	ft_putstr(char *str)
{
	if (!str || !*str)
		return ;
	while (*str)
		write(1, str++, 1);
}
