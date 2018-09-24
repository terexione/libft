#include "../includes/libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dest;
	if (!s)
		return ((void*) 0);
	dest = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
