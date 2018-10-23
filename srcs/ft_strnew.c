#include "../includes/libft.h"

char    *ft_strnew(size_t size)
{
    char    *dest;
    
    if (!(dest = (char*)malloc(sizeof(char) * size + 1)))
        return ((void*) 0);
    ft_bzero(dest, size + 1);
    return (dest);
}