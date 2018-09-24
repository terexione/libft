#include "../includes/libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	if (!dest || !src)
		return ((void*) 0);
	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
