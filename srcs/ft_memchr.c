#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ptr;
	size_t		i;
	
	ptr = s;
	i = 0;
	while (i < n && ptr[i])
	{
		if (ptr[i] == (char)c)
			return ((void*)s + i);
		i++;
	}
	return ((void *) 0);
}
