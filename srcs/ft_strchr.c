#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s) + 1)
	{
		if (s[i] == (char) c)
		       return ((char*)s + i);	
		i++;
	}
	return ((void *) 0);
}
