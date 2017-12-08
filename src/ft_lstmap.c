/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:48:55 by briviere          #+#    #+#             */
/*   Updated: 2017/12/08 17:08:20 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lstmap(t_lst *lst, t_lst *(*f)(t_lst *elem))
{
	t_lst	*start;
	t_lst	*res;
	t_lst	*tmp;

	res = ft_lstnew(0, 0);
	start = res;
	while (lst)
	{
		tmp = f(lst);
		res->next = ft_lstnew(tmp->content, tmp->content_size);
		free(tmp);
		if (res->next == 0)
			return (0);
		if (start == 0)
			start = res;
		lst = lst->next;
		res = res->next;
	}
	res = start->next;
	ft_memdel((void **)&start);
	return (res);
}
