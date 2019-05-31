/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 13:44:03 by amaquena          #+#    #+#             */
/*   Updated: 2019/05/31 16:21:48 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char *str;
	int start;
	int end;
	int i;

	start = 0;
	end = ft_strlen(s);
	while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
		start++;
	while(s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
		end--;
	if(!(str = ft_strnew(end - start)))
				return (NULL);
	i = 0;
	while (start < end)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}
