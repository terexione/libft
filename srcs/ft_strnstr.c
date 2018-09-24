#include "../includes/libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big || !little)
		return ((void *) 0);
	i = 0;
	while (i < len)
	{
		j = 0;
		while (big[i] && little[j] && i < len && big[i] == little[j])
		{
			i++;
			j++;
		}
		if (little[j] == '\0')
			return ((char*)big + i - j);
		i++;
	}
	return ((void *) 0);
}
