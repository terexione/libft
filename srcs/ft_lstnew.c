#include "../includes/libft.h"

t_list  *ft_lstnew(void const *content, size_t content_size)
{
    t_list  *dest;

    if (!(dest = (t_list *)malloc(sizeof(t_list))))
        return ((void*) 0);
    if (!content)
    {
        dest->content = (void *) 0;
        dest->content_size = 0;
    }
    else {
        if (!(dest->content = (void *)malloc(content_size)))
            return ((void*) 0);
        ft_memcpy(dest->content, content, content_size);
        dest->content_size = content_size;
    }
    dest->next = (void*) 0;
    return (dest);
}