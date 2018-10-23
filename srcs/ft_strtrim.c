#include "../includes/libft.h"

char    *ft_strtrim(char const *s)
{
    int  l;
    int  r;
    int  len;
    int  i;
    char    *dest;

    if (!s)
        return ((void*) 0);
    l = 0;
    len = ft_strlen(s);
    r = 1;
    while (s[l] && (s[l] == ' ' || s[l] == '\n' || s[l] == '\t'))
        l++;
    while (s[len - r] && (s[len - r] == ' ' || s[len - r] == '\n' || s[len - r] == '\t'))
        r++;
    if (!(dest = ft_strnew(len - l - r + 1 > 0 ? len -l -r +1 : 0)))
        return ((void*) 0);
    i = 0;
    while (l <= len - r)
    {
        dest[i] = s[l];
        l++;
        i++;
    }
    return (dest);
}