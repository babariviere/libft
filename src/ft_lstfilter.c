/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfilter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 15:08:17 by briviere          #+#    #+#             */
/*   Updated: 2017/12/07 15:17:15 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstfilter(t_list *lst, int (*f)(t_list *elem))
{
	t_list	*res;

	res = 0;
	while (lst)
	{
		if (f(lst))
			ft_lstpush(&res, lst);
		lst = lst->next;
	}
	return (res);
}
