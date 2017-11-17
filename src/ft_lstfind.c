/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:18:44 by briviere          #+#    #+#             */
/*   Updated: 2017/11/16 12:28:37 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstfind(const t_list *lst,
		int (*f)(const void *content, const void *to_find),
		void *to_find)
{
	while (lst)
	{
		if (f(lst->content, to_find) == 1)
			return ((t_list *)lst);
		lst = lst->next;
	}
	return (0);
}
