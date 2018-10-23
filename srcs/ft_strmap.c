#include "../includes/libft.h"

char    *ft_strmap(char const *s, char (*f)(char))
{
    char    *dest;
    size_t  i;

    if (!s || !f || !(dest = ft_strnew(ft_strlen(s))))
        return ((void*) 0);
    i = 0;
    while (s[i] != '\0')
    {
        dest[i] = f(s[i]);
        i++;
    }
    return (dest);
}