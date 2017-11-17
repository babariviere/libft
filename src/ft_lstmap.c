/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:48:55 by briviere          #+#    #+#             */
/*   Updated: 2017/11/08 16:32:49 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*start;
	t_list	*res;
	t_list	*tmp;

	res = ft_lstnew(0, 0);
	start = res;
	while (lst)
	{
		tmp = f(lst);
		res->next = ft_lstnew(tmp->content, tmp->content_size);
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
