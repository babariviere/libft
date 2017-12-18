/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstfind.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:18:44 by briviere          #+#    #+#             */
/*   Updated: 2017/12/08 17:06:06 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlst.h"

t_dlst		*ft_dlstfind(const t_dlst *lst,
		int (*f)(const void *content, const void *to_find),
		void *to_find)
{
	while (lst)
	{
		if (f(lst->content, to_find) == 1)
			return ((t_dlst *)lst);
		lst = lst->next;
	}
	return (0);
}
