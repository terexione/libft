#include "../includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			k = i;
			while (haystack[k] && needle[j] && haystack[k] == needle[j])
			{
				k++;
				j++;
			}
			if (needle[j] == '\0')
				return ((char*)(haystack + i));
		}
		i++;
	}
	return ((void *) 0);
}
