/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:49:12 by amaquena          #+#    #+#             */
/*   Updated: 2019/05/27 17:12:20 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;

	if (needle == '\0')
		return ((char *)needle);
	i = 0;
	while (haystack[i] != '\0')
	{
		if (ft_strcmp(haystack + i, needle) == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
