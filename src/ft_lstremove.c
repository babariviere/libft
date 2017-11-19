/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 14:07:58 by briviere          #+#    #+#             */
/*   Updated: 2017/11/19 14:33:33 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstremove(t_list **lst, size_t idx, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*tmp_prev;

	tmp = *lst;
	if (idx == 0)
	{
		tmp = tmp->next;
		ft_lstdelone(lst, del);
		*lst = tmp;
		return ;
	}
	while (tmp->next && idx-- > 1)
		tmp = tmp->next;
	if (idx > 1)
		return ;
	tmp_prev = tmp;
	if ((tmp = tmp->next) == 0)
		return ;
	tmp_prev->next = tmp->next;
	ft_lstdelone(&tmp, del);
}
