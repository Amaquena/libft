/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:11:53 by amaquena          #+#    #+#             */
/*   Updated: 2019/06/07 17:24:12 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char *str;


	while (s)
	{
		i = 0;
		while (s[i] != c)
			i++;
		str = ft_str(s, i);
	}
}

char * ft_str(char const *str, int i)
{
	
}
