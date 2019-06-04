/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 11:31:07 by amaquena          #+#    #+#             */
/*   Updated: 2019/06/04 14:53:54 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char chr;
	int i;

	i = 0;
	chr = (unsigned char)c;
	while (s[i] && s[i] != c)
		i++;
	if (s[i] == chr)
		return ((char *)s + i);
	return (NULL);
}
