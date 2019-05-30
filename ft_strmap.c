/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 13:22:17 by amaquena          #+#    #+#             */
/*   Updated: 2019/05/30 14:18:16 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *memres;
	char *strs;
	char *strmem;

	memres =  ft_memalloc((size_t)ft_strlen((char*)s) + 1);
	if (!s || !memres)
		return (NULL);
	strs = (char *)s;
	strmem = memres;
	while (strs && *strs)
	{
		*strmem = (*f)(*strs);
		strmem++;
		strs++;
	}
	return (memres);
}
