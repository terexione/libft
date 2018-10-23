#include "../includes/libft.h"

void    ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
    if (alst)
    {
        while ((*alst)->next)
        {
            ft_lstdelone(&(*alst)->next, del);
	    (*alst) = (*alst)->next;
        }
        ft_lstdelone(*alst, del);
    }
}
