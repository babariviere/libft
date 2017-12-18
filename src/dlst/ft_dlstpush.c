/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstpush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:22:52 by briviere          #+#    #+#             */
/*   Updated: 2017/12/08 17:07:04 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlst.h"

void	ft_dlstpush(t_dlst **alst, t_dlst *nw)
{
	t_dlst	*tmp;

	if (*alst == 0)
	{
		*alst = nw;
		return ;
	}
	tmp = *alst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = nw;
	nw->prev = tmp;
}
