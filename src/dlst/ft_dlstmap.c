/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:48:55 by briviere          #+#    #+#             */
/*   Updated: 2017/12/08 17:05:26 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlst	*ft_dlstmap(t_dlst *lst, t_dlst *(*f)(t_dlst *elem))
{
	t_dlst	*start;
	t_dlst	*res;
	t_dlst	*tmp;

	res = ft_dlstnew(0, 0);
	start = res;
	while (lst)
	{
		tmp = f(lst);
		res->next = ft_dlstnew(tmp->content, tmp->content_size);
		free(tmp);
		if (res->next == 0)
			return (0);
		if (start == 0)
			start = res;
		res->next->prev = res;
		lst = lst->next;
		res = res->next;
	}
	res = start->next;
	if (res)
		res->prev = 0;
	ft_memdel((void **)&start);
	return (res);
}
