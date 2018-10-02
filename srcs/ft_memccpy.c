#include "../includes/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*ptr1;
	const unsigned char	*ptr2;
	
	i = 0;
	ptr1 = dest;
	ptr2 = src;
	while (i < n)
	{
		ptr1[i] = (unsigned char)ptr2[i];
		if (ptr2[i] == (unsigned char) c)
			return (ptr1 + i + 1);
		i++;
	}
	return ((void*) 0);
}
