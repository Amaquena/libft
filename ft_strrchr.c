/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:34:21 by amaquena          #+#    #+#             */
/*   Updated: 2019/05/27 10:57:10 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;
	unsigned char chr;

	i = ft_strlen(s);
	s += i;
	chr = c;
	while (i > 0)
	{
		if (*s == chr)
			return ((char*)s);
		s--;
		i--;
	}
	return (NULL);
}
