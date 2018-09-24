#include "../includes/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*ptr1;
	const char	*ptr2;
	if (!dest || !src)
		return ((void*) 0);
	i = 0;
	ptr1 = dest;
	ptr2 = src;
	while (i < n)
	{
		ptr1[i] = ptr2[i];
		if (ptr2[i] == (unsigned char) c)
			return (dest + i + 1);
		i++;
	}
	return ((void*) 0);
}
