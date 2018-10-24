/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asansyzb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 15:55:30 by asansyzb          #+#    #+#             */
/*   Updated: 2018/10/23 17:42:34 by asansyzb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (alst)
	{
		while ((*alst)->next)
		{
			ft_lstdelone(&(*alst)->next, del);
			(*alst) = (*alst)->next;
		}
		ft_lstdelone(alst, del);
	}
}
