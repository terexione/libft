#include "../includes/libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char    *dest;
    size_t  i;

    if (!s || !(dest = ft_strnew(len)))
        return ((void*) 0);
    i = 0;
    while (i < len)
    {
        dest[i] = s[start + i];
        i++;
    }
    return (dest);
}