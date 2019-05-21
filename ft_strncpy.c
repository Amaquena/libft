/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:33:54 by amaquena          #+#    #+#             */
/*   Updated: 2019/05/21 17:50:25 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	if (dst == NULL || src == NULL)
		return (NULL);

	i = 0;
	while ((i < len) && (src != '\0'))
	{
		dst[i] = src[i];
		i++;
	}

	while(i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
