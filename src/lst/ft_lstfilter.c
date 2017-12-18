/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfilter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 15:08:17 by briviere          #+#    #+#             */
/*   Updated: 2017/12/08 17:07:49 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

t_lst		*ft_lstfilter(t_lst *lst, int (*f)(t_lst *elem))
{
	t_lst	*res;

	res = 0;
	while (lst)
	{
		if (f(lst))
			ft_lstpush(&res, ft_lstnew(lst->content, lst->content_size));
		lst = lst->next;
	}
	return (res);
}
