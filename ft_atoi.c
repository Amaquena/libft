/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:21:53 by amaquena          #+#    #+#             */
/*   Updated: 2019/05/24 10:56:48 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int sign;
	int val;

	sign = 1;
	i = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	val = 0;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) == 0)
		{
			return (sign * val);
		}
		else
		{
			val = (val * 10) + (str[i] - '0');
			i++;
		}
	}
	return (sign * val);
}
