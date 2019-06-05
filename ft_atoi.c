/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:21:53 by amaquena          #+#    #+#             */
/*   Updated: 2019/06/05 15:56:55 by amaquena         ###   ########.fr       */
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
	while (str[i] == ' ' || str[i]== '\n' || str[i] == '\r'
			|| str[i] == '\t' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	val = 0;
	while (ft_isdigit(str[i]) && str[i] != '\0')
	{
		val = (val * 10) + (val - '0');
		i++;
	}
	return (sign * val);
}
