/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstfilter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 15:08:17 by briviere          #+#    #+#             */
/*   Updated: 2017/12/08 17:05:37 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlst.h"

t_dlst		*ft_dlstfilter(t_dlst *lst, int (*f)(t_dlst *elem))
{
	t_dlst	*res;

	res = 0;
	while (lst)
	{
		if (f(lst))
			ft_dlstpush(&res, ft_dlstnew(lst->content, lst->content_size));
		lst = lst->next;
	}
	return (res);
}
