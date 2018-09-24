#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	if (!s)
		return ((void *) 0);
	i = (int)ft_strlen(s);
	while (--i >= 0)
	{
		if (s[i] == (char) c)
			return ((char*)s + i);
	}
	return ((void *) 0);
}
