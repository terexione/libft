/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asansyzb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 15:34:03 by asansyzb          #+#    #+#             */
/*   Updated: 2018/10/23 15:34:17 by asansyzb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (big[i] && little[j] && i < len && big[i] == little[j])
		{
			i++;
			j++;
		}
		if (little[j] == '\0')
			return ((char*)big + i - j);
		i++;
	}
	return ((void *)0);
}
