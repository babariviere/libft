/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfilter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 15:08:17 by briviere          #+#    #+#             */
/*   Updated: 2017/12/08 09:27:38 by briviere         ###   ########.fr       */
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
			ft_lstpush(&res, ft_lstnew(lst->content, lst->content_size));
		lst = lst->next;
	}
	return (res);
}
