/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 11:25:59 by amaquena          #+#    #+#             */
/*   Updated: 2019/05/29 11:46:53 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;

	if (s == NULL)
		return (NULL);
	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}
