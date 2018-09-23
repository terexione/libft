#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
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
		i++;
	}
	return (dest);
}
