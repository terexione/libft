#include "../includes/libft.h"

void    *ft_memalloc(size_t size)
{
    void *dest;

    if (!(dest = (void*)malloc(size)))
        return ((void *) 0);
    ft_bzero(dest, size);
    return (dest);
}