/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaquena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 15:41:59 by amaquena          #+#    #+#             */
/*   Updated: 2019/06/12 17:36:13 by amaquena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *temp;

	if (!lst)
		return (NULL);
	temp = (t_list *)malloc(sizeof(t_list));
	temp = lst;
	ft_lstiter(temp, &(*f));
	return (temp);
}
