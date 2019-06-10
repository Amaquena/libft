/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:22:14 by amaquena          #+#    #+#             */
/*   Updated: 2019/06/10 16:59:12 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(char c)
{
	if ((c == ' ') || (c == '\n') || (c == '\t') || (c == '\v')
			|| (c == '\f') || (c == '\r'))
		return (1);
	return (0);
}
