#include "../includes/libft.h"

void			*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*ptr1;
	const char	*ptr2;

	ptr1 = dest;
	ptr2 = src;
	i = -1;
	if (ptr1 < ptr2)
		while ((int)(--n) >= 0)
			*(ptr1 + n) = *(ptr2 + n);
	else
		while (++i < n)
			*(ptr1 + i) = *(ptr2 + i);
	return (dest);
}
