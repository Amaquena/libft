/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 13:44:03 by amaquena          #+#    #+#             */
/*   Updated: 2019/06/10 16:41:37 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	end;
	size_t	start;
	size_t	n;
	char	*str;

	if (!s)
		return (NULL);
	start = 0;
	while (ft_isspace(s[start]))
	{
		start++;
		if (s[start] == '\0')
			return ("");
	}
	end = ft_strlen(s) - 1;
	while (ft_isspace(s[end]))
		end--;
	n = 0;
	if (!(str = ft_strnew(end - start + 1)))
		return (NULL);
	while (start < end + 1)
	{
		str[n] = s[start];
		start++;
		n++;
	}
	str[n] = '\0';
	return (str);
}
