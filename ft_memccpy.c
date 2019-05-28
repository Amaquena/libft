/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 15:15:52 by amaquena          #+#    #+#             */
/*   Updated: 2019/05/28 16:13:42 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char chr;
	unsigned char *chrdst;
	unsigned char *chrsrc;

	chr = (unsigned char)c;
	chrdst = (unsigned char *)dst;
	chrsrc = (unsigned char *)src;
	while (n > 0)
	{
		if (*chrsrc == chr)
			return (++chrdst);
		*chrdst = *chrsrc;
		chrdst++;
		chrsrc++;
		n--;
	}
	return (NULL);
}
